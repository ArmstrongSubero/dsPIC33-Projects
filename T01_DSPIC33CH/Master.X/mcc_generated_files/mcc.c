/**
  @Generated PIC24 / dsPIC33 / PIC32MM MCUs Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    mcc.c

  @Summary:
    This is the mcc.c file generated using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.125
        Device            :  dsPIC33CH128MP502
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.36B
        MPLAB             :  MPLAB X v5.20
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

// Configuration bits: selected in the GUI

// FSEC
#pragma config BWRP = OFF    //Boot Segment Write-Protect bit->Boot Segment may be written
#pragma config BSS = DISABLED    //Boot Segment Code-Protect Level bits->No Protection (other than BWRP)
#pragma config BSEN = OFF    //Boot Segment Control bit->No Boot Segment
#pragma config GWRP = OFF    //General Segment Write-Protect bit->General Segment may be written
#pragma config GSS = DISABLED    //General Segment Code-Protect Level bits->No Protection (other than GWRP)
#pragma config CWRP = OFF    //Configuration Segment Write-Protect bit->Configuration Segment may be written
#pragma config CSS = DISABLED    //Configuration Segment Code-Protect Level bits->No Protection (other than CWRP)
#pragma config AIVTDIS = OFF    //Alternate Interrupt Vector Table bit->Disabled AIVT

// FBSLIM
#pragma config BSLIM = 8191    //Boot Segment Flash Page Address Limit bits->8191

// FOSCSEL
#pragma config FNOSC = FRC    //Oscillator Source Selection->FRC
#pragma config IESO = ON    //Two-speed Oscillator Start-up Enable bit->Start up device with FRC, then switch to user-selected oscillator source

// FOSC
#pragma config POSCMD = NONE    //Primary Oscillator Mode Select bits->Primary Oscillator disabled
#pragma config OSCIOFNC = ON    //OSC2 Pin Function bit->OSC2 is general purpose digital I/O pin
#pragma config FCKSM = CSECMD    //Clock Switching Mode bits->Clock switching is enabled,Fail-safe Clock Monitor is disabled
#pragma config PLLKEN = PLLKEN_ON    //PLLKEN->reserved as PLLKEN_ON
#pragma config XTCFG = G3    //XT Config->24-32 MHz crystals
#pragma config XTBST = ENABLE    //XT Boost->Boost the kick-start

// FWDT
#pragma config RWDTPS = PS1048576    //Run Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config RCLKSEL = LPRC    //Watchdog Timer Clock Select bits->Always use LPRC
#pragma config WINDIS = OFF    //Watchdog Timer Window Enable bit->Watchdog Timer in Window mode
#pragma config WDTWIN = WIN25    //Watchdog Timer Window Select bits->WDT Window is 25% of WDT period
#pragma config SWDTPS = PS1048576    //Sleep Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config FWDTEN = ON_SW    //Watchdog Timer Enable bit->WDT controlled via SW, use WDTCON.ON bit

// FICD
#pragma config ICS = PGD3    //ICD Communication Channel Select bits->Communicate on PGC3 and PGD3
#pragma config JTAGEN = OFF    //JTAG Enable bit->JTAG is disabled

// FDMTIVTL
#pragma config DMTIVTL = 0    //Dead Man Timer Interval low word->0

// FDMTIVTH
#pragma config DMTIVTH = 0    //Dead Man Timer Interval high word->0

// FDMTCNTL
#pragma config DMTCNTL = 0    //Lower 16 bits of 32 bit DMT instruction count time-out value (0-0xFFFF)->0

// FDMTCNTH
#pragma config DMTCNTH = 0    //Upper 16 bits of 32 bit DMT instruction count time-out value (0-0xFFFF)->0

// FDMT
#pragma config DMTDIS = OFF    //Dead Man Timer Disable bit->Dead Man Timer is Disabled and can be enabled by software

// FDEVOPT
#pragma config ALTI2C1 = OFF    //Alternate I2C1 Pin bit->I2C1 mapped to SDA1/SCL1 pins
#pragma config ALTI2C2 = OFF    //Alternate I2C2 Pin bit->I2C2 mapped to SDA2/SCL2 pins
#pragma config SMBEN = SMBUS    //SM Bus Enable->SMBus input threshold is enabled
#pragma config SPI2PIN = PPS    //SPI2 Pin Select bit->SPI2 uses I/O remap (PPS) pins

// FALTREG
#pragma config CTXT1 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits->Not Assigned
#pragma config CTXT2 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits->Not Assigned
#pragma config CTXT3 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 3 bits->Not Assigned
#pragma config CTXT4 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 4 bits->Not Assigned

// FCFGPRA0
#pragma config CPRA0 = MSTR    //Pin RA0 Ownership Bits->Master core owns pin.
#pragma config CPRA1 = MSTR    //Pin RA1 Ownership Bits->Master core owns pin.
#pragma config CPRA2 = MSTR    //Pin RA2 Ownership Bits->Master core owns pin.
#pragma config CPRA3 = MSTR    //Pin RA3 Ownership Bits->Master core owns pin.
#pragma config CPRA4 = MSTR    //Pin RA4 Ownership Bits->Master core owns pin.

// FCFGPRB0
#pragma config CPRB0 = MSTR    //Pin RB0 Ownership Bits->Master core owns pin.
#pragma config CPRB1 = MSTR    //Pin RB1 Ownership Bits->Master core owns pin.
#pragma config CPRB2 = MSTR    //Pin RB2 Ownership Bits->Master core owns pin.
#pragma config CPRB3 = MSTR    //Pin RB3 Ownership Bits->Master core owns pin.
#pragma config CPRB4 = SLV1    //Pin RB4 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB5 = MSTR    //Pin RB5 Ownership Bits->Master core owns pin.
#pragma config CPRB6 = MSTR    //Pin RB6 Ownership Bits->Master core owns pin.
#pragma config CPRB7 = MSTR    //Pin RB7 Ownership Bits->Master core owns pin.
#pragma config CPRB8 = SLV1    //Pin RB8 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB9 = MSTR    //Pin RB9 Ownership Bits->Master core owns pin.
#pragma config CPRB10 = SLV1    //Pin RB10 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB11 = MSTR    //Pin RB11 Ownership Bits->Master core owns pin.
#pragma config CPRB12 = SLV1    //Pin RB12 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB13 = SLV1    //Pin RB13 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB14 = SLV1    //Pin RB14 Ownership Bits->Slave 1 core owns pin.
#pragma config CPRB15 = MSTR    //Pin RB15 Ownership Bits->Master core owns pin.

// FCFGPRC0
#pragma config CPRC0 = MSTR    //Pin RC0 Ownership Bits->Master core owns pin.
#pragma config CPRC1 = MSTR    //Pin RC1 Ownership Bits->Master core owns pin.
#pragma config CPRC2 = MSTR    //Pin RC2 Ownership Bits->Master core owns pin.
#pragma config CPRC3 = MSTR    //Pin RC3 Ownership Bits->Master core owns pin.
#pragma config CPRC4 = MSTR    //Pin RC4 Ownership Bits->Master core owns pin.
#pragma config CPRC5 = MSTR    //Pin RC5 Ownership Bits->Master core owns pin.
#pragma config CPRC6 = MSTR    //Pin RC6 Ownership Bits->Master core owns pin.
#pragma config CPRC7 = MSTR    //Pin RC7 Ownership Bits->Master core owns pin.
#pragma config CPRC8 = MSTR    //Pin RC8 Ownership Bits->Master core owns pin.
#pragma config CPRC9 = MSTR    //Pin RC9 Ownership Bits->Master core owns pin.
#pragma config CPRC10 = MSTR    //Pin RC10 Ownership Bits->Master core owns pin.
#pragma config CPRC11 = MSTR    //Pin RC11 Ownership Bits->Master core owns pin.
#pragma config CPRC12 = MSTR    //Pin RC12 Ownership Bits->Master core owns pin.
#pragma config CPRC13 = MSTR    //Pin RC13 Ownership Bits->Master core owns pin.
#pragma config CPRC14 = MSTR    //Pin RC14 Ownership Bits->Master core owns pin.
#pragma config CPRC15 = MSTR    //Pin RC15 Ownership Bits->Master core owns pin.

// FCFGPRD0
#pragma config CPRD0 = MSTR    //Pin RD0 Ownership Bits->Master core owns pin.
#pragma config CPRD1 = MSTR    //Pin RD1 Ownership Bits->Master core owns pin.
#pragma config CPRD2 = MSTR    //Pin RD2 Ownership Bits->Master core owns pin.
#pragma config CPRD3 = MSTR    //Pin RD3 Ownership Bits->Master core owns pin.
#pragma config CPRD4 = MSTR    //Pin RD4 Ownership Bits->Master core owns pin.
#pragma config CPRD5 = MSTR    //Pin RD5 Ownership Bits->Master core owns pin.
#pragma config CPRD6 = MSTR    //Pin RD6 Ownership Bits->Master core owns pin.
#pragma config CPRD7 = MSTR    //Pin RD7 Ownership Bits->Master core owns pin.
#pragma config CPRD8 = MSTR    //Pin RD8 Ownership Bits->Master core owns pin.
#pragma config CPRD9 = MSTR    //Pin RD9 Ownership Bits->Master core owns pin.
#pragma config CPRD10 = MSTR    //Pin RD10 Ownership Bits->Master core owns pin.
#pragma config CPRD11 = MSTR    //Pin RD11 Ownership Bits->Master core owns pin.
#pragma config CPRD12 = MSTR    //Pin RD12 Ownership Bits->Master core owns pin.
#pragma config CPRD13 = MSTR    //Pin RD13 Ownership Bits->Master core owns pin.
#pragma config CPRD14 = MSTR    //Pin RD14 Ownership Bits->Master core owns pin.
#pragma config CPRD15 = MSTR    //Pin RD15 Ownership Bits->Master core owns pin.

// FCFGPRE0
#pragma config CPRE0 = MSTR    //Pin RE0 Ownership Bits->Master core owns pin.
#pragma config CPRE1 = MSTR    //Pin RE1 Ownership Bits->Master core owns pin.
#pragma config CPRE2 = MSTR    //Pin RE2 Ownership Bits->Master core owns pin.
#pragma config CPRE3 = MSTR    //Pin RE3 Ownership Bits->Master core owns pin.
#pragma config CPRE4 = MSTR    //Pin RE4 Ownership Bits->Master core owns pin.
#pragma config CPRE5 = MSTR    //Pin RE5 Ownership Bits->Master core owns pin.
#pragma config CPRE6 = MSTR    //Pin RE6 Ownership Bits->Master core owns pin.
#pragma config CPRE7 = MSTR    //Pin RE7 Ownership Bits->Master core owns pin.
#pragma config CPRE8 = MSTR    //Pin RE8 Ownership Bits->Master core owns pin.
#pragma config CPRE9 = MSTR    //Pin RE9 Ownership Bits->Master core owns pin.
#pragma config CPRE10 = MSTR    //Pin RE10 Ownership Bits->Master core owns pin.
#pragma config CPRE11 = MSTR    //Pin RE11 Ownership Bits->Master core owns pin.
#pragma config CPRE12 = MSTR    //Pin RE12 Ownership Bits->Master core owns pin.
#pragma config CPRE13 = MSTR    //Pin RE13 Ownership Bits->Master core owns pin.
#pragma config CPRE14 = MSTR    //Pin RE14 Ownership Bits->Master core owns pin.
#pragma config CPRE15 = MSTR    //Pin RE15 Ownership Bits->Master core owns pin.

#include "mcc.h"
#include "reset.h"
#include "clock.h"

/**
 Section: Local Variables
*/

/**
 Section: Function prototypes
*/

/**
* a private place to store the error code if we run into a severe error
*/

void OSCILLATOR_Initialize(void)
{
    CLOCK_Initialize();
}

uint16_t SYSTEM_GetResetCause(void)
{
    return RCON;
}

void __attribute__ ((weak)) SYSTEM_ResetCauseHandler(void)
{
    RESET_CauseHandler();
}

void SYSTEM_ResetCauseClearAll()
{ 
    RESET_CauseClearAll();
}
/**
 End of File
*/