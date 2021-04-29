/**
 * @file activity3.h
 * @author Abhijith Ashokan (abhijithashokan99@gmail.com)
 * @brief headerfile for activity3.c containing function declerations and macros
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITYTHREE__H_
    #define _ACTIVITYTHREE__H_


#include <avr/io.h>
#include <util/delay.h>

#define NonInveringPWM (1<<COM1A1) 
#define ModeSelection1 (1<<WGM10)
#define ModeSelection2 (1<<WGM11)
#define ModeSelection3 (1<<WGM12)
#define PWMPrescalar ((1<<CS11)|(1<<CS10))
#define LEDPWM (1<<PB1)
/**
 * @brief Declaring ports for PWM
 * 
 */
void portPWM();


#endif
