/**
 * @file main.c
 * @author Abhijith Ashokan(abhijithashokan99@gmail.com)
 * @brief main file
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


int main(void)
{

        /**
     * @brief initiaising ports for led and switches
     * 
     */
    port();
    
    /**
     * @brief initializing port for PWM
     * 
     */
    portPWM();

    /**
     * @brief initialising analog to digital conversion
     * 
     */
    InitADC();

    USARTInit(103);

    /** 
     * @brief creating a temporary variable to store the Analog to Digital converted value
     *
     */
    uint16_t temp;

    while(1)
    {
      
    /**
     * @brief if person is seated and heater switch is pressed LED(Heater) will turn ON
     * 
     */

      if((!((PIND)&SEATSWITCH))&& (!((PIND)&HeaterButton))) // SEAT SWITCH PRESSED AND HEATER SWITCH PRESSED
      {

      LedBlink();

      temp = ReadADC(0);
      _delay_ms(200);
      OCR1A = temp;
       _delay_ms(200);
      USARTWriteChar(temp);

      }

      else
      {
        PORTB clear LED;
      }


    }

    return 0;
}
