#ifndef ADC1_H
#define ADC1_H

#include "mcc.h"
#include <stdint.h>
#include <stdbool.h>

/*** ADC Channel Definitions *****************************************/
#define ADC_CHANNEL_POTENTIOMETER ADC_CHANNEL_0

typedef enum
{
    ADC_CHANNEL_0 = 0
} ADC_CHANNEL;

typedef enum
{
    ADC_CONFIGURATION_DEFAULT
} ADC_CONFIGURATION;

/*********************************************************************
* Function: ADC_ReadPercentage(ADC_CHANNEL channel);
*
* Overview: Reads the requested ADC channel and returns the percentage
*            of that conversions result (0-100%).
*
* PreCondition: channel is enabled via ADC_ChannelEnable()
*
* Input: ADC_CHANNEL channel - enumeration of the ADC channels
*        available in this demo.  They should be meaningful names and
*        not the names of the ADC pins on the device (as the demo code
*        may be ported to other boards).
*         i.e. ADC_ReadPercentage(ADC_CHANNEL_POTENTIOMETER);
*
* Output: uint8_t indicating the percentage of the result 0-100% or
*         0xFF for an error
*
********************************************************************/
uint8_t ADC_ReadPercentage(ADC_CHANNEL channel);


/*********************************************************************
* Function: ADC_Read10bit(ADC_CHANNEL channel);
*
* Overview: Reads the requested ADC channel and returns the 10-bit
*           representation of this data.
*
* PreCondition: channel is enabled via ADC_ChannelEnable()
*
* Input: ADC_CHANNEL channel - enumeration of the ADC channels
*        available in this demo.  They should be meaningful names and
*        not the names of the ADC pins on the device (as the demo code
*        may be ported to other boards).
*         i.e. - ADCReadPercentage(ADC_CHANNEL_POTENTIOMETER);
*
* Output: uint16_t the right adjusted 10-bit representation of the ADC
*         channel conversion or 0xFFFF for an error.
*
********************************************************************/
uint16_t ADC_Read10bit(ADC_CHANNEL channel);



/*********************************************************************
* Function: ADC_Read12bit(ADC_CHANNEL channel);
*
* Overview: Reads the requested ADC channel and returns the 12-bit
*           representation of this data.
*
* PreCondition: channel is configured via the ADCConfigure() function
*
* Input: ADC_CHANNEL channel - enumeration of the ADC channels
*        available in this demo.  They should be meaningful names and
*        not the names of the ADC pins on the device (as the demo code
*        may be ported to other boards).
*         i.e. - ADCReadPercentage(ADC_CHANNEL_POTENTIOMETER);
*
* Output: uint16_t - The 12-bit ADC channel conversion value, or 0xFFFF for an 
 *                   error.
*
********************************************************************/
uint16_t ADC_Read12bit(ADC_CHANNEL channel);



/*********************************************************************
* Function: uint16_t ADC_Read12bitAverage(ADC_CHANNEL channel, uint16_t numberOfSamplesInAverage)
*
* Overview: Repeatedly reads the requested ADC channel and returns a 12-bit
*           representation of the average value returned by the ADC over the
*           sample set.
*
* PreCondition: channel is configured via the ADCConfigure() function
*
* Input: ADC_CHANNEL channel - enumeration of the ADC channels
*        available in this demo.  They should be meaningful names and
*        not the names of the ADC pins on the device (as the demo code
*        may be ported to other boards).
*         i.e. - ADCReadPercentage(ADC_CHANNEL_POTENTIOMETER);
*        uint16_t numberOfSamplesInAverage - the number of samples to take when
*                 computing the average result.  The more the samples, the better
*                 the result quality, but the longer the operation will take.
*
* Output: uint16_t - The 12-bit average ADC channel conversion result value
*
********************************************************************/
uint16_t ADC_Read12bitAverage(ADC_CHANNEL channel, uint16_t numberOfSamplesInAverage);


/*********************************************************************
* Function: bool ADC_ChannelEnable(ADC_CHANNEL channel, ADC_CONFIGURATION configuration);
*
* Overview: Enables specified channel
*
* PreCondition: none
*
* Input: ADC_CHANNEL channel - the channel to enable
*
* Output: bool - true if successfully configured.  false otherwise.
*
********************************************************************/
bool ADC_ChannelEnable(ADC_CHANNEL channel);

/*********************************************************************
* Function: bool ADC_SetConfiguration(ADC_CONFIGURATION configuration)
*
* Overview: Configures the ADC module to specified setting
*
* PreCondition: none
*
* Input: ADC_CONFIGURATION configuration - the mode in which to run the ADC
*
* Output: bool - true if successfully configured.  false otherwise.
*
********************************************************************/
bool ADC_SetConfiguration(ADC_CONFIGURATION configuration);

#endif  //ADC_H