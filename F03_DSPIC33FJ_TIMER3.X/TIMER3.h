 
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h>
#include "APP.h"

#define SAMPPRD (FCY/Fs)-1 // cycles per sample
#define NUMSAMP 256
#define Fs 48000 // Hz


void tmr3Init();


#endif	

