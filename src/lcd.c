#include <avr/io.h>
#include"lcd.h"
void Init()
{
    DDRD|=(1<<PD2);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);

}
