#include "activity4.h"

void USARTInit(uint16_t ubrr_value)
{
    //SET baud rate

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    //ENABLE THE RECEIVER AND TRANSMITTER

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}
char USARTReadChar()
{
    // Wait until a data is available
    while(!(UCSR0A&(1<<RXC0)))
    {
        //Do nothing
    }

    return UDR0;
}

void USARTWriteChar(uint16_t temp_value)
{
    //Wait until the transmitter is ready
    //First Condition
    if(temp_value>=0&&temp_value<=200)
    {
        unsigned char output01[]="Temperature is 20 degree C \n";
        int i = 0;
        while (output01[i]!=0)
        {
        while(!(UCSR0A&(1<<UDRE0)));
        UDR0=output01[i];
        i++;
        }
    }

    //Second Condition
    if(temp_value>=210&&temp_value<=500)
    {
        unsigned char output02[]="Temperature is 25 degree C \n";
        int i = 0;
        while (output02[i]!=0)
        {
        while(!(UCSR0A&(1<<UDRE0)));
        UDR0=output02[i];
        i++;
        }
    }

    //Third Condition
    if(temp_value>=510&&temp_value<=700)
    {
        unsigned char output03[]="Temperature is 29 degree C \n";
        int i = 0;
        while (output03[i]!=0)
        {
        while(!(UCSR0A&(1<<UDRE0)));
        UDR0=output03[i];
        i++;
        }
    }

    //Fourth Condition
    if(temp_value>=710&&temp_value<=1024)
    {
        unsigned char output04[]="Temperature is 33 degree C \n";
        int i = 0;
        while (output04[i]!=0)
        {
        while(!(UCSR0A&(1<<UDRE0)));
        UDR0=output04[i];
        i++;
        }
    }
    //Now write the data to USART buffer
    //UDR0 = data;
}
