#ifndef _ACTIVITYFOUR__H_   //header guard
#define _ACTIVITYFOUR__H_

#include <avr/io.h>
#include <util/delay.h>

void USARTInit(uint16_t );
char USARTReadChar();
void USARTWriteChar(uint16_t );

#endif // _ACTIVITYFOUR__H_
