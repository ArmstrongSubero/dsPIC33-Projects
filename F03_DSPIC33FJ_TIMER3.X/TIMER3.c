#include "TIMER3.h"
#include "APP.h"

void tmr3Init()
{
    TMR3 = 0x0000; // Clear TMR3
    PR3 = SAMPPRD; // Load period value in PR3
    IFS0bits.T3IF = 0; // Clear Timer 3 Interrupt Flag
    IEC0bits.T3IE = 0; // Clear Timer 3 interrupt enable bit

    T3CONbits.TON = 1; // Enable Timer 3
}