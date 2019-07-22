
#include "UART.h"
/**
 * Set up UART.
 */
void serialInit()
{
    U1MODE = 0x0000;
    U1BRG = 239; // Clock divisor
    U1STA = 0x0000;

    U1MODEbits.UARTEN = 1;
    U1STAbits.UTXEN = 1;
}

/**
 * Transmit a byte over UART.
 *
 * \param byte Byte to transmit.
 * \todo Read a "finish" flag instead of delay.
 */
void serialWrite(uint16_t byte)
{
    while (U1STAbits.UTXBF); // Wait if buffer full.
    U1TXREG = byte;
}

/**
 * Transmit a string, followed by a newline, over UART.
 *
 * \param str String to transmit.
 */
void serialWriteLine(uint16_t *str)
{
    int i;
    for (i = 0; i < strlen(str); i++) {
        serialWrite(str[i]);
    }
    serialWrite('\n');
}

int __attribute__((__section__(".libc.write"))) write(int handle, void *buffer, unsigned int len) 
{
    unsigned int i;

    for (i = len; i; --i)
    {
        serialWrite(*(char*)buffer++);
    }
    return(len);
}