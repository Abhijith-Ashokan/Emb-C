#ifndef _ACTIVITYONE__H_    // header guards
#define _ACTIVITYONE__h_

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

/**
 * @brief defining macros
 * 
 */

#define LED (1<<PB0)
#define SEATSWITCH (1<<PD0)
#define HeaterButton (1<<PD2)
#define InterruptType ((1<<ISC01))
#define InterruptMask (1<<INT0)
#define set |=
#define clear &=~


/**
 * @brief Declaring port function
 * 
 */
void port();

/**
 * @brief Declaring LedBlink function(function to turn on heater)
 * 
 */

void LedBlink();

#endif
