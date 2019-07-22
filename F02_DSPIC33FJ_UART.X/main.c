
#include "dsPIC33FJ_STD.h"
#include "UART.h"

void initMain()
{
   clkInit(); 
   serialInit();
}

int main(void) {
    initMain();
    
    // Set up Serial port
    TRISBbits.TRISB7 = 0; // TX = RP7
    RPOR3bits.RP7R = 0b00011;
    
    while(1)
    {
       printf("Boo\n");
        __delay_ms(1000); 
    }
    
    return 0;
}
