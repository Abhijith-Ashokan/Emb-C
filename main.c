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

int main(void)
{
    /**
     * @brief initialising analog to digital conversion
     * 
     */
    InitADC();

    /** 
     * @brief creating a temporary variable to store the Analog to Digital converted value
     *
     */
    uint16_t temp;

    /**
     * @brief initiaising ports for led and switches
     * 
     */
    port();

    while(1)
    {
      LedBlink();
      temp = ReadADC(0);
      _delay_ms(200);
    }

    return 0;
}
