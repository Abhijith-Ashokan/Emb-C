/**
 * @file activity3.c
 * @author Abhijith Ashokan (abhijithashokan99@gmail.com)
 * @brief library containing PWM port definitions
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "activity3.h"

/**
 * @brief PWM port definitions
 * 
 */
void portPWM(){

    TCCR1A |= NonInveringPWM|ModeSelection2|ModeSelection1;
    TCCR1B |= ModeSelection3|PWMPrescalar;
    DDRB |= LEDPWM;

}
