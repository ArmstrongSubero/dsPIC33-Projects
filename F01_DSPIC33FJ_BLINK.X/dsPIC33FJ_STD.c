#include <xc.h>

void clkInit(void) {
    CLKDIVbits.PLLPRE = 0;
    PLLFBDbits.PLLDIV = 42 - 2; // (divisor is 2 more than the value)
    CLKDIVbits.PLLPOST = 0;
    
    // 40 x: 73.700000 MHz = 36.850000 MIPS
    // 42 x: 77.385 MHz = 38.6925 MIPS
    // 43 x: 79.2275 MHz = 39.61375 MIPS
    
    while (OSCCONbits.LOCK != 1); // Wait for PLL to lock
    RCONbits.SWDTEN = 0; // Disable Watch Dog Timer
}