#include "activityone.h"

unsigned volatile FLAG=0;

void port()
{
    DDRB set LED;   // set B0 for led
    DDRD clear SEATSWITCH;  // clear bit
    PORTD set SEATSWITCH;  // SET BIT
    DDRD clear HeaterButton;   // clear bit
    PORTD set HeaterButton;   //set bit
    EICRA set InterruptType;  // set ISC01 HIGH
    EIMSK set InterruptMask;  //set PIN D2 HIGH

    sei();

}

void LedBlink()
{
    /**
     * @brief if person is seated and heater switch is pressed LED(Heater) will turn ON
     * 
     */
      if((!((PIND)&SEATSWITCH))&& (FLAG == 1)) // both seat switch and heater switch pressed
       {
           PORTB set LED;
            _delay_ms(2000);
            FLAG=0;
       }
       else
       {
           PORTB clear LED;

            // _delay_ms(20);

       }
}

ISR(INT0_vect)
{
    FLAG =1;
}
