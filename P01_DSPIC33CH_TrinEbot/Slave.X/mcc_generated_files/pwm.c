/**
  PWM Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    pwm.c

  @Summary
    This is the generated driver implementation file for the PWM driver using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description
    This source file provides APIs for PWM.
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

#include "pwm.h"

/**
 Section: Driver Interface Function Definitions
*/
void PWM_Initialize (void)
{
    // MCLKSEL FOSC - System Clock; HRERR disabled; LOCK disabled; DIVSEL 1:16; 
    PCLKCON = 0x30;
    // FSCL 0; 
    FSCL = 0x00;
    // FSMINPER 0; 
    FSMINPER = 0x00;
    // MPHASE 0; 
    MPHASE = 0x00;
    // MDC 0; 
    MDC = 0x00;
    // MPER 16; 
    MPER = 0x10;
    // LFSR 0; 
    LFSR = 0x00;
    // CTA7EN disabled; CTA8EN disabled; CTA1EN disabled; CTA2EN disabled; CTA5EN disabled; CTA6EN disabled; CTA3EN disabled; CTA4EN disabled; 
    CMBTRIGL = 0x00;
    // CTB8EN disabled; CTB3EN disabled; CTB2EN disabled; CTB1EN disabled; CTB7EN disabled; CTB6EN disabled; CTB5EN disabled; CTB4EN disabled; 
    CMBTRIGH = 0x00;
    // PWMLFA PWMS1 or PWMS2;; S1APOL Positive logic; S2APOL Positive logic; PWMLFAD No Assignment; PWMS1A PWM1H; PWMS2A PWM1H; 
    LOGCONA = 0x00;
    // PWMLFB PWMS1 | PWMS2; S2BPOL Positive logic; PWMLFBD No Assignment; S1BPOL Positive logic; PWMS2B PWM1H; PWMS1B PWM1H; 
    LOGCONB = 0x00;
    // PWMLFC PWMS1 | PWMS2; PWMLFCD No Assignment; S2CPOL Positive logic; S1CPOL Positive logic; PWMS1C PWM1H; PWMS2C PWM1H; 
    LOGCONC = 0x00;
    // PWMS1D PWM1H; S1DPOL Positive logic; PWMLFD PWMS1 | PWMS2; PWMLFDD No Assignment; S2DPOL Positive logic; PWMS2D PWM1H; 
    LOGCOND = 0x00;
    // PWMS1E PWM1H; PWMS2E PWM1H; S1EPOL Positive logic; PWMLFE PWMS1 | PWMS2; S2EPOL Positive logic; PWMLFED No Assignment; 
    LOGCONE = 0x00;
    // S1FPOL Positive logic; PWMS2F PWM1H; PWMS1F PWM1H; S2FPOL Positive logic; PWMLFFD No Assignment; PWMLFF PWMS1 | PWMS2; 
    LOGCONF = 0x00;
    // EVTASEL PGTRGSEL bits; EVTASYNC Not synchronized; EVTAPOL Active-high; EVTAPGS PG1; EVTASTRD Stretched to 8 PWM clock cycles minimum; EVTAOEN disabled; 
    PWMEVTA = 0x00;
    // EVTBPGS PG1; EVTBSYNC Not synchronized; EVTBPOL Active-high; EVTBSEL PGTRGSEL bits; EVTBSTRD Stretched to 8 PWM clock cycles minimum; EVTBOEN disabled; 
    PWMEVTB = 0x00;
    // EVTCPGS PG1; EVTCPOL Active-high; EVTCSEL PGTRGSEL bits; EVTCSTRD Stretched to 8 PWM clock cycles minimum; EVTCSYNC Not synchronized; EVTCOEN disabled; 
    PWMEVTC = 0x00;
    // EVTDOEN disabled; EVTDSTRD Stretched to 8 PWM clock cycles minimum; EVTDPOL Active-high; EVTDPGS PG1; EVTDSEL PGTRGSEL bits; EVTDSYNC Not synchronized; 
    PWMEVTD = 0x00;
    // EVTEOEN disabled; EVTEPOL Active-high; EVTEPGS PG1; EVTESTRD Stretched to 8 PWM clock cycles minimum; EVTESEL PGTRGSEL bits; EVTESYNC Not synchronized; 
    PWMEVTE = 0x00;
    // EVTFPOL Active-high; EVTFPGS PG1; EVTFSTRD Stretched to 8 PWM clock cycles minimum; EVTFSEL PGTRGSEL bits; EVTFOEN disabled; EVTFSYNC Not synchronized; 
    PWMEVTF = 0x00;
    // MSTEN disabled; TRGMOD Single trigger mode; SOCS Self-trigger; UPDMOD SOC update; MPHSEL disabled; MPERSEL disabled; MDCSEL disabled; 
    PG1CONH = 0x00;
    // MSTEN disabled; TRGMOD Single trigger mode; SOCS Self-trigger; UPDMOD SOC update; MPHSEL disabled; MPERSEL disabled; MDCSEL disabled; 
    PG2CONH = 0x00;
    // MSTEN disabled; TRGMOD Single trigger mode; SOCS Self-trigger; UPDMOD SOC update; MPHSEL disabled; MPERSEL disabled; MDCSEL disabled; 
    PG3CONH = 0x00;
    // MSTEN disabled; TRGMOD Single trigger mode; SOCS Self-trigger; UPDMOD SOC update; MPHSEL disabled; MPERSEL disabled; MDCSEL disabled; 
    PG4CONH = 0x00;
    // TRSET disabled; UPDREQ disabled; CLEVT disabled; TRCLR disabled; CAP disabled; SEVT disabled; FFEVT disabled; UPDATE disabled; FLTEVT disabled; 
    PG1STAT = 0x00;
    // TRSET disabled; UPDREQ disabled; CLEVT disabled; TRCLR disabled; CAP disabled; SEVT disabled; FFEVT disabled; UPDATE disabled; FLTEVT disabled; 
    PG2STAT = 0x00;
    // TRSET disabled; UPDREQ disabled; CLEVT disabled; TRCLR disabled; CAP disabled; SEVT disabled; FFEVT disabled; UPDATE disabled; FLTEVT disabled; 
    PG3STAT = 0x00;
    // TRSET disabled; UPDREQ disabled; CLEVT disabled; TRCLR disabled; CAP disabled; SEVT disabled; FFEVT disabled; UPDATE disabled; FLTEVT disabled; 
    PG4STAT = 0x00;
    // FLTDAT 0; DBDAT 0; SWAP disabled; OVRENH disabled; OVRENL disabled; OSYNC User output overrides are synchronized to the local PWM time base; CLMOD disabled; FFDAT 0; CLDAT 0; OVRDAT 0; 
    PG1IOCONL = 0x00;
    // FLTDAT 0; DBDAT 0; SWAP disabled; OVRENH disabled; OVRENL disabled; OSYNC User output overrides are synchronized to the local PWM time base; CLMOD disabled; FFDAT 0; CLDAT 0; OVRDAT 0; 
    PG2IOCONL = 0x00;
    // FLTDAT 0; DBDAT 0; SWAP disabled; OVRENH disabled; OVRENL disabled; OSYNC User output overrides are synchronized to the local PWM time base; CLMOD disabled; FFDAT 0; CLDAT 0; OVRDAT 0; 
    PG3IOCONL = 0x00;
    // FLTDAT 0; DBDAT 0; SWAP disabled; OVRENH disabled; OVRENL disabled; OSYNC User output overrides are synchronized to the local PWM time base; CLMOD disabled; FFDAT 0; CLDAT 0; OVRDAT 0; 
    PG4IOCONL = 0x00;
    // PENL disabled; DTCMPSEL PCI Sync Logic; PMOD Independent; POLL Active-high; PENH enabled; CAPSRC Software; POLH Active-high; 
    PG1IOCONH = 0x18;
    // PENL disabled; DTCMPSEL PCI Sync Logic; PMOD Independent; POLL Active-high; PENH enabled; CAPSRC Software; POLH Active-high; 
    PG2IOCONH = 0x18;
    // PENL disabled; DTCMPSEL PCI Sync Logic; PMOD Independent; POLL Active-high; PENH enabled; CAPSRC Software; POLH Active-high; 
    PG3IOCONH = 0x18;
    // PENL enabled; DTCMPSEL PCI Sync Logic; PMOD Complementary; POLL Active-high; PENH enabled; CAPSRC Software; POLH Active-high; 
    PG4IOCONH = 0x0C;
    // UPDTRG Manual; ADTR1PS 1:1; PGTRGSEL EOC event; ADTR1EN3 disabled; ADTR1EN1 disabled; ADTR1EN2 disabled; 
    PG1EVTL = 0x00;
    // UPDTRG Manual; ADTR1PS 1:1; PGTRGSEL EOC event; ADTR1EN3 disabled; ADTR1EN1 disabled; ADTR1EN2 disabled; 
    PG2EVTL = 0x00;
    // UPDTRG Manual; ADTR1PS 1:1; PGTRGSEL EOC event; ADTR1EN3 disabled; ADTR1EN1 disabled; ADTR1EN2 disabled; 
    PG3EVTL = 0x00;
    // UPDTRG Manual; ADTR1PS 1:1; PGTRGSEL EOC event; ADTR1EN3 disabled; ADTR1EN1 disabled; ADTR1EN2 disabled; 
    PG4EVTL = 0x00;
    // ADTR2EN1 disabled; IEVTSEL EOC; SIEN disabled; FFIEN disabled; ADTR1OFS None; CLIEN disabled; FLTIEN disabled; ADTR2EN2 disabled; ADTR2EN3 disabled; 
    PG1EVTH = 0x00;
    // ADTR2EN1 disabled; IEVTSEL EOC; SIEN disabled; FFIEN disabled; ADTR1OFS None; CLIEN disabled; FLTIEN disabled; ADTR2EN2 disabled; ADTR2EN3 disabled; 
    PG2EVTH = 0x00;
    // ADTR2EN1 disabled; IEVTSEL EOC; SIEN disabled; FFIEN disabled; ADTR1OFS None; CLIEN disabled; FLTIEN disabled; ADTR2EN2 disabled; ADTR2EN3 disabled; 
    PG3EVTH = 0x00;
    // ADTR2EN1 disabled; IEVTSEL EOC; SIEN disabled; FFIEN disabled; ADTR1OFS None; CLIEN disabled; FLTIEN disabled; ADTR2EN2 disabled; ADTR2EN3 disabled; 
    PG4EVTH = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG1FPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG2FPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG3FPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG4FPCIL = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG1FPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG2FPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG3FPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG4FPCIH = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG1CLPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG2CLPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG3CLPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG4CLPCIL = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG1CLPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG2CLPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG3CLPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG4CLPCIH = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG1FFPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG2FFPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG3FFPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG4FFPCIL = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG1FFPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG2FFPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG3FFPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG4FFPCIH = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG1SPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG2SPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG3SPCIL = 0x00;
    // PSS Internally connected to '1'b0; PPS Not inverted; SWTERM disabled; PSYNC disabled; TERM Manual Terminate; AQPS Not inverted; AQSS None; TSYNCDIS PWM EOC; 
    PG4SPCIL = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG1SPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG2SPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG3SPCIH = 0x00;
    // PCIGT disabled; TQPS Not inverted; SWPCI Drives '0'; BPEN disabled; TQSS None; SWPCIM PCI acceptance logic; BPSEL PWM Generator 1; ACP Level-sensitive; 
    PG4SPCIH = 0x00;
    // LEB 0; 
    PG1LEBL = 0x00;
    // LEB 0; 
    PG2LEBL = 0x00;
    // LEB 0; 
    PG3LEBL = 0x00;
    // LEB 0; 
    PG4LEBL = 0x00;
    // PWMPCI 1; PLR disabled; PLF disabled; PHR disabled; PHF disabled; 
    PG1LEBH = 0x00;
    // PWMPCI 1; PLR disabled; PLF disabled; PHR disabled; PHF disabled; 
    PG2LEBH = 0x00;
    // PWMPCI 1; PLR disabled; PLF disabled; PHR disabled; PHF disabled; 
    PG3LEBH = 0x00;
    // PWMPCI 1; PLR disabled; PLF disabled; PHR disabled; PHF disabled; 
    PG4LEBH = 0x00;
    // PHASE 0; 
    PG1PHASE = 0x00;
    // PHASE 0; 
    PG2PHASE = 0x00;
    // PHASE 0; 
    PG3PHASE = 0x00;
    // PHASE 0; 
    PG4PHASE = 0x00;
    // DC 266; 
    PG1DC = 0x10A;
    // DC 266; 
    PG2DC = 0x10A;
    // DC 266; 
    PG3DC = 0x10A;
    // DC 266; 
    PG4DC = 0x10A;
    // DCA 0; 
    PG1DCA = 0x00;
    // DCA 0; 
    PG2DCA = 0x00;
    // DCA 0; 
    PG3DCA = 0x00;
    // DCA 0; 
    PG4DCA = 0x00;
    // PER 532; 
    PG1PER = 0x214;
    // PER 532; 
    PG2PER = 0x214;
    // PER 532; 
    PG3PER = 0x214;
    // PER 532; 
    PG4PER = 0x214;
    // TRIGA 0; 
    PG1TRIGA = 0x00;
    // TRIGA 0; 
    PG2TRIGA = 0x00;
    // TRIGA 0; 
    PG3TRIGA = 0x00;
    // TRIGA 0; 
    PG4TRIGA = 0x00;
    // TRIGB 0; 
    PG1TRIGB = 0x00;
    // TRIGB 0; 
    PG2TRIGB = 0x00;
    // TRIGB 0; 
    PG3TRIGB = 0x00;
    // TRIGB 0; 
    PG4TRIGB = 0x00;
    // TRIGC 0; 
    PG1TRIGC = 0x00;
    // TRIGC 0; 
    PG2TRIGC = 0x00;
    // TRIGC 0; 
    PG3TRIGC = 0x00;
    // TRIGC 0; 
    PG4TRIGC = 0x00;
    // DTL 0; 
    PG1DTL = 0x00;
    // DTL 0; 
    PG2DTL = 0x00;
    // DTL 0; 
    PG3DTL = 0x00;
    // DTL 0; 
    PG4DTL = 0x00;
    // DTH 0; 
    PG1DTH = 0x00;
    // DTH 0; 
    PG2DTH = 0x00;
    // DTH 0; 
    PG3DTH = 0x00;
    // DTH 0; 
    PG4DTH = 0x00;
    

    // HREN disabled; MODSEL Independent Edge; TRGCNT 1; CLKSEL Master clock; ON enabled; 
    PG1CONL = 0x8008;
    // HREN disabled; MODSEL Independent Edge; TRGCNT 1; CLKSEL Master clock; ON enabled; 
    PG2CONL = 0x8008;
    // HREN disabled; MODSEL Independent Edge; TRGCNT 1; CLKSEL Master clock; ON enabled; 
    PG3CONL = 0x8008;
    // HREN disabled; MODSEL Independent Edge; TRGCNT 1; CLKSEL Master clock; ON enabled; 
    PG4CONL = 0x8008;
}


void __attribute__ ((weak)) PWM_Generator1CallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_Generator1(void)
{
    if(IFS4bits.PWM1IF)
    {
		PWM_Generator1CallBack();
	
        IFS4bits.PWM1IF = 0;
        //Add your custom code here.
    }
}

void __attribute__ ((weak)) PWM_Generator2CallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_Generator2(void)
{
    if(IFS4bits.PWM2IF)
    {
		PWM_Generator2CallBack();
	
        IFS4bits.PWM2IF = 0;
        //Add your custom code here.
    }
}

void __attribute__ ((weak)) PWM_Generator3CallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_Generator3(void)
{
    if(IFS4bits.PWM3IF)
    {
		PWM_Generator3CallBack();
	
        IFS4bits.PWM3IF = 0;
        //Add your custom code here.
    }
}

void __attribute__ ((weak)) PWM_Generator4CallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_Generator4(void)
{
    if(IFS4bits.PWM4IF)
    {
		PWM_Generator4CallBack();
	
        IFS4bits.PWM4IF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventACallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventA(void)
{
    if(IFS10bits.PEVTAIF)
    {
		PWM_EventACallBack();
		
        IFS10bits.PEVTAIF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventBCallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventB(void)
{
    if(IFS10bits.PEVTBIF)
    {
		PWM_EventBCallBack();
		
        IFS10bits.PEVTBIF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventCCallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventC(void)
{
    if(IFS10bits.PEVTCIF)
    {
		PWM_EventCCallBack();
		
        IFS10bits.PEVTCIF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventDCallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventD(void)
{
    if(IFS10bits.PEVTDIF)
    {
		PWM_EventDCallBack();
		
        IFS10bits.PEVTDIF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventECallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventE(void)
{
    if(IFS10bits.PEVTEIF)
    {
		PWM_EventECallBack();
		
        IFS10bits.PEVTEIF = 0;
        //Add your custom code here.
    }
}


void __attribute__ ((weak)) PWM_EventFCallBack(void)
{
    /* Add your custom callback code here or implement
    the Callback in the application code, without the weak attribute */
}

void PWM_Tasks_EventF(void)
{
    if(IFS10bits.PEVTFIF)
    {
		PWM_EventFCallBack();
		
        IFS10bits.PEVTFIF = 0;
        //Add your custom code here.
    }
}


