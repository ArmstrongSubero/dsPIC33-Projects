
#include "dsPIC33FJ_STD.h"

void initMain()
{
   clkInit(); 
}

int main(void) {
    initMain();
    
    TRISBbits.TRISB7 = 0;
    
    while(1)
    {
        LATBbits.LATB7 = ~LATBbits.LATB7;
        __delay_ms(1000);
    }
    
    return 0;
}
