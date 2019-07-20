/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.125
        Device            :  dsPIC33CH128MP502
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.36B
        MPLAB 	          :  MPLAB X v5.20
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/mcc.h"
#include <p33CH128MP502.h>


/*
                         Main application
 */

 
#define DATA_UNDER_TEST 0xAAAA
 
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
 
    //Program and enable slave
    SLAVE1_Program();
    SLAVE1_Start();
 
    ProtocolA_DATA dataSend;
    ProtocolB_DATA dataReceive;
 
    dataSend.ProtocolA[0] = DATA_UNDER_TEST;
    dataReceive.ProtocolB[0] = 0;                         //Initializing to known value.
 
    //Mailbox write
    SLAVE1_ProtocolAWrite((ProtocolA_DATA*)&dataSend);
 
    //Issue interrupt to slave
    SLAVE1_InterruptRequestGenerate();
    while(!SLAVE1_IsInterruptRequestAcknowledged());
    SLAVE1_InterruptRequestComplete();
    while(SLAVE1_IsInterruptRequestAcknowledged());
 
    //Wait for interrupt from slave
    while(!SLAVE1_IsInterruptRequested());
    SLAVE1_InterruptRequestAcknowledge();
    while(SLAVE1_IsInterruptRequested());
    SLAVE1_InterruptRequestAcknowledgeComplete();   
 
    //Mailbox read
    SLAVE1_ProtocolBRead((ProtocolB_DATA*)&dataReceive);
 
    //Glow LED on data match
    if(dataReceive.ProtocolB[0] == DATA_UNDER_TEST)
    {
        LATBbits.LATB7 = 1;
    }
    else
    {
        LATBbits.LATB7 = 0;
    }
    
 
    ADC_SetConfiguration(ADC_CONFIGURATION_DEFAULT);
    ADC_ChannelEnable(ADC_CHANNEL_POTENTIOMETER);
    
    uint16_t pot_1;
 
    while (1)
    {
         pot_1 = ADC_Read12bit(ADC_CHANNEL_POTENTIOMETER);
         printf("Pot_1:%d\n", pot_1);
 
        __delay_ms(1000);
    }
}
/**
 End of File
*/

