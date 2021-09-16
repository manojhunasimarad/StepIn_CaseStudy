
#include <avr/io.h>
#include <util/delay.h>
#include"lcd.h"

int main(void)
{
    Init();


    while(1)
    {
        if(BUTTONSENSOR)
        {
            if(HEATERSENSOR)
            {
                PORTD|=(1<<PD2);
                _delay_ms(200);
            }
            else{
                 PORTD&=~(1<<PD2);
                _delay_ms(200);
            }
        }
        else{
            PORTD&=~(1<<PD2);
                _delay_ms(200);
        }
    }

    return 0;
}
