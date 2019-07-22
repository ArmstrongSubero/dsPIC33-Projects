
#include "dsPIC33FJ_STD.h"
#include "APP.h"
#include "UART.h"
#include "TIMER3.h"

void initMain()
{
   clkInit(); 
   serialInit();
   tmr3Init();
}

int main(void) {
    initMain();
    
    while(1)
    {
     
    }
    
    return 0;
}
