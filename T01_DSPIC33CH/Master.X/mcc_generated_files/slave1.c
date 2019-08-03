/**
  SLAVE1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    slave1.c

  @Summary
    This is the generated driver implementation file for the SLAVE1 driver using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description
    This source file provides APIs for SLAVE1.
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


// FMBXM
#pragma config MBXM0 = M2S    //Mailbox 0 data direction->Mailbox register configured for Master data write (Master to Slave data transfer)
#pragma config MBXM1 = M2S    //Mailbox 1 data direction->Mailbox register configured for Master data write (Master to Slave data transfer)
#pragma config MBXM2 = M2S    //Mailbox 2 data direction->Mailbox register configured for Master data write (Master to Slave data transfer)
#pragma config MBXM3 = M2S    //Mailbox 3 data direction->Mailbox register configured for Master data write (Master to Slave data transfer)
#pragma config MBXM4 = M2S    //Mailbox 4 data direction->Mailbox register configured for Master data write (Master to Slave data transfer)
#pragma config MBXM5 = S2M    //Mailbox 5 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM6 = S2M    //Mailbox 6 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM7 = S2M    //Mailbox 7 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM8 = S2M    //Mailbox 8 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM9 = S2M    //Mailbox 9 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM10 = S2M    //Mailbox 10 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM11 = S2M    //Mailbox 11 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM12 = S2M    //Mailbox 12 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM13 = S2M    //Mailbox 13 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM14 = S2M    //Mailbox 14 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)
#pragma config MBXM15 = S2M    //Mailbox 15 data direction->Mailbox register configured for Master data read (Slave to Master data transfer)

// FMBXHS1
#pragma config MBXHSA = MBX4    //Mailbox handshake protocol block A register assignment->MSIxMBXD4 assigned to mailbox handshake protocol block A
#pragma config MBXHSB = MBX9    //Mailbox handshake protocol block B register assignment->MSIxMBXD9 assigned to mailbox handshake protocol block B
#pragma config MBXHSC = MBX15    //Mailbox handshake protocol block C register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block C
#pragma config MBXHSD = MBX15    //Mailbox handshake protocol block D register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block D

// FMBXHS2
#pragma config MBXHSE = MBX15    //Mailbox handshake protocol block E register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block E
#pragma config MBXHSF = MBX15    //Mailbox handshake protocol block F register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block F
#pragma config MBXHSG = MBX15    //Mailbox handshake protocol block G register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block G
#pragma config MBXHSH = MBX15    //Mailbox handshake protocol block H register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block H

// FMBXHSEN
#pragma config HSAEN = ON    //Mailbox A data flow control protocol block enable->Mailbox data flow control handshake protocol block enabled
#pragma config HSBEN = ON    //Mailbox B data flow control protocol block enable->Mailbox data flow control handshake protocol block enabled
#pragma config HSCEN = OFF    //Mailbox C data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSDEN = OFF    //Mailbox D data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSEEN = OFF    //Mailbox E data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSFEN = OFF    //Mailbox F data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSGEN = OFF    //Mailbox G data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSHEN = OFF    //Mailbox H data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.

// FS1DEVOPT
#pragma config S1ALTI2C1 = OFF    //Alternate I2C1 Pin bit->I2C1 mapped to SDA1/SCL1 pins
#pragma config S1SPI1PIN = PPS    //S1 SPI1 Pin Select bit->Slave SPI1 uses I/O remap (PPS) pins
#pragma config S1SSRE = ON    //Slave Slave Reset Enable->Slave generated resets will reset the Slave Enable Bit in the MSI module
#pragma config S1MSRE = ON    //Master Slave Reset Enable->The master software oriented RESET events (RESET Op-Code, Watchdog timeout, TRAP reset, illegalInstruction) will also cause the slave subsystem to reset.

// FS1ICD
#pragma config S1ICS = PGD1    //ICD Communication Channel Select bits->Communicate on PGC1 and PGD1
#pragma config S1ISOLAT = ON    //Isolate the Slave core subsystem from the master subsystem during Debug->The slave can operate (in debug mode) even if the SLVEN bit in the MSI is zero.
#pragma config S1NOBTSWP = OFF    //BOOTSWP Instruction Enable/Disable bit->BOOTSWP instruction is disabled

// FS1OSCSEL
#pragma config S1FNOSC = FRCDIVN    //Oscillator Source Selection->Internal Fast RC (FRC) Oscillator with postscaler
#pragma config S1IESO = ON    //Two-speed Oscillator Start-up Enable bit->Start up device with FRC, then switch to user-selected oscillator source

// FS1OSC
#pragma config S1OSCIOFNC = OFF    //Slave OSC2 Pin Function bit->OSC2 is clock output
#pragma config S1FCKSM = CSDCMD    //Clock Switching Mode bits->Both Clock switching and Fail-safe Clock Monitor are disabled
#pragma config S1PLLKEN = S1PLLKEN_ON    //S1PLLKEN->S1PLLKEN_ON

// FS1ALTREG
#pragma config S1CTXT1 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits->Not Assigned
#pragma config S1CTXT2 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits->Not Assigned
#pragma config S1CTXT3 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 3 bits->Not Assigned
#pragma config S1CTXT4 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 4 bits->Not Assigned

// FS1WDT
#pragma config S1RWDTPS = PS1048576    //Run Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config S1RCLKSEL = LPRC    //Watchdog Timer Clock Select bits->Always use LPRC
#pragma config S1WINDIS = ON    //Watchdog Timer Window Enable bit->Watchdog Timer operates in Non-Window mode
#pragma config S1WDTWIN = WIN25    //Watchdog Timer Window Select bits->WDT Window is 25% of WDT period
#pragma config S1SWDTPS = PS1048576    //Sleep Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config S1FWDTEN = ON_SW    //Watchdog Timer Enable bit->WDT controlled via WDTCON.ON bit

/**
  Section: Included Files
*/

#include "slave1.h"
#include <libpic30.h>
#include "Slave.h"

#define SLAVE_IMAGE     Slave
#define SLAVE_NUMBER    1

inline static bool SLAVE1_ProtocolAIsFull();
inline static bool SLAVE1_ProtocolAIsEmpty();
inline static bool SLAVE1_ProtocolBIsFull();
inline static bool SLAVE1_ProtocolBIsEmpty();

/**
 Section: Driver Interface Function Definitions
*/
void SLAVE1_Initialize()
{
    //SRSTIE disabled; SLVEN disabled; MSTIRQ disabled; RFITSEL Trigger data valid interrupt when 1st FIFO entry is written by Slave; STMIACK disabled; 
    MSI1CON = 0x00;	
    //WFEN enabled; RFEN enabled; 
    MSI1FIFOCS = 0x8080;	


}

void SLAVE1_Start()
{
    _start_slave();
}

void SLAVE1_Program()               
{
    _program_slave(SLAVE_NUMBER,0,SLAVE_IMAGE);
}
 
void SLAVE1_InterruptRequestGenerate()
{
    MSI1CONbits.MSTIRQ = 1;
}

bool SLAVE1_IsInterruptRequestAcknowledged()
{
    return(MSI1STATbits.MTSIACK);
    
}

void SLAVE1_InterruptRequestComplete()
{
    MSI1CONbits.MSTIRQ = 0;
}
 
bool SLAVE1_IsInterruptRequested()
{
    return(MSI1STATbits.STMIRQ);
}

void SLAVE1_InterruptRequestAcknowledge()
{
    MSI1CONbits.STMIACK = 1;
}

void SLAVE1_InterruptRequestAcknowledgeComplete()
{
    MSI1CONbits.STMIACK = 0;
}
 
SLAVE_RESET_CAUSE SLAVE1_GetResetCause()
{
    SLAVE_RESET_CAUSE resetCause;
    
    if(MSI1STATbits.SLVWDRST)
    {
        resetCause = SLAVE_RESET_CAUSE_WATCHDOG;
    }
    else
    {
        resetCause = SLAVE_RESET_CAUSE_UNSPECIFIED;
    }
    
    return resetCause;
}

void SLAVE1_ResetCauseClear(SLAVE_RESET_CAUSE resetCause)
{
    switch(resetCause)
    {
        case SLAVE_RESET_CAUSE_WATCHDOG :   MSI1STATbits.SLVWDRST = 0;
                                            break;
        default                         :
                                            break;
    }
}
 
SLAVE_SYSTEM_STATUS SLAVE1_SystemStatusGet()
{
    SLAVE_SYSTEM_STATUS systemStatus = SLAVE_SYSTEM_STATUS_RUNNING;
    
    if(MSI1STATbits.SLVWDRST)
    {
        systemStatus = SLAVE_SYSTEM_STATUS_IN_RESET;
    }
    else
    {
        switch(MSI1STATbits.SLVPWR)
        {
            case 0: systemStatus = SLAVE_SYSTEM_STATUS_NOT_IN_LOW_POWER_MODE;
                    break;
            case 1: systemStatus = SLAVE_SYSTEM_STATUS_IDLE;
                    break;
            case 2: systemStatus = SLAVE_SYSTEM_STATUS_SLEEP;
                    break;
            default:systemStatus = SLAVE_SYSTEM_STATUS_RUNNING;
                    break;             
        }
    }
    return systemStatus;
}

uint16_t SLAVE1_Read(uint16_t *pData, uint16_t wordCount)
{
    uint16_t readCountStatus = 0;
    
    while(wordCount)
    {
        if(MSI1FIFOCSbits.RFEMPTY != 1)
        {
            *pData++ = MRSWFDATA;
            wordCount--;
            readCountStatus++;
        }
        else
        {
            break;
        }
    }
    return readCountStatus;   
}

uint16_t SLAVE1_Write(uint16_t *pData, uint16_t wordCount)
{
    uint16_t writeCountStatus = 0;
    
    while(wordCount)
    {
        if(MSI1FIFOCSbits.WFFULL != 1)
        {
            MWSRFDATA = *pData++;
            wordCount--;
            writeCountStatus++;
        }
        else
        {
            break;
        }
    }
    return writeCountStatus;
}

bool SLAVE1_ProtocolAWrite(ProtocolA_DATA *pData)
{
    bool status = false;
    if(SLAVE1_ProtocolAIsEmpty())
    {
        MSI1MBX0D = pData->ProtocolA[0];
        MSI1MBX1D = pData->ProtocolA[1];
        MSI1MBX2D = pData->ProtocolA[2];
        MSI1MBX3D = pData->ProtocolA[3];
        MSI1MBX4D = pData->ProtocolA[4];

        status = true;
    }	
    else
    {
        status = false;
    }
    return status;	
}



inline static bool SLAVE1_ProtocolAIsFull()
{
    return (MSI1MBXSbits.DTRDYA);
}

inline static bool SLAVE1_ProtocolAIsEmpty()
{
    return (!MSI1MBXSbits.DTRDYA);
}
bool SLAVE1_ProtocolBRead(ProtocolB_DATA *pData)
{
    bool status = false;    
    if(SLAVE1_ProtocolBIsFull())
    {
        pData->ProtocolB[0] = MSI1MBX5D;
        pData->ProtocolB[1] = MSI1MBX6D;
        pData->ProtocolB[2] = MSI1MBX7D;
        pData->ProtocolB[3] = MSI1MBX8D;
        pData->ProtocolB[4] = MSI1MBX9D;

        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}


inline static bool SLAVE1_ProtocolBIsFull()
{
    return (MSI1MBXSbits.DTRDYB);
}

inline static bool SLAVE1_ProtocolBIsEmpty()
{
    return (!MSI1MBXSbits.DTRDYB);
}







