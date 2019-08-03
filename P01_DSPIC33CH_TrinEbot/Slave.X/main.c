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
        Device            :  dsPIC33CH128MP502S1
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
#include <libpic30.h>

/*
                         Main application
 */
#define DATA_UNDER_TEST 0xAAAA
 
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
 
    ProtocolA_DATA dataReceive;
    ProtocolB_DATA dataSend;
 
    dataReceive.ProtocolA[0] = 0;                 //Initializing to known value.
    dataSend.ProtocolB[0] = 0;                      //Initializing to known value.
 
    //Wait for interrupt from master    
    while(!MASTER_IsInterruptRequested());
    MASTER_InterruptRequestAcknowledge();
    while(MASTER_IsInterruptRequested());
    MASTER_InterruptRequestAcknowledgeComplete();
 
    //Mailbox read    
    MASTER_ProtocolARead((ProtocolA_DATA*)&dataReceive);
 
    //Copy the received data for retransmission
    dataSend.ProtocolB[0] = dataReceive.ProtocolA[0];
 
    //Mailbox write 
    MASTER_ProtocolBWrite((ProtocolB_DATA*)&dataSend);
 
    //Issue interrupt to master
    MASTER_InterruptRequestGenerate();
    while(!MASTER_IsInterruptRequestAcknowledged());
    MASTER_InterruptRequestComplete();
    while(MASTER_IsInterruptRequestAcknowledged());
 
    //Glow LED on data match
    if(dataReceive.ProtocolA[0] == DATA_UNDER_TEST)
    {
        LATBbits.LATB4 = 1;
    }
    else
    {
        LATBbits.LATB4 = 0;
    }
    
    uint16_t x;
 
    while (1)
    {
        
        for (x = 0; x < 255; x++)
        {
             PG1DC = x;
             __delay_ms(100);
        }
        
    }
}
/**
 End of File
*/

