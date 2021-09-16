#include <avr/io.h>
#include <util/delay.h>
#include "act1.h"

/**
 * @brief A function to operate the button and heater sensor
 
 *
 */
void ButtonsHeat_LED_Init()
{
     /*Configure LED and Switch pins*/
    DDRD|=(1<<PD2);//setting Port D2=1 for led glowing
    DDRD&=~(1<<PD0);//making that 0 clearing the bit
    PORTD|=(1<<PD0);//matching bit
    DDRD&=~(1<<PD1);//making that 0 clearing the bit
     PORTD|=(1<<PD1);//setting the bit
     while(1)
     {
         if(!(PIND&(1<<PD0)))
         {
             if(!(PIND&(1<<PD1)))
             {
                 PORTD|=(1<<PD2);
             }
             else
                {
                PORTD&=~(1<<PD2);
             }
         }
         else
            {
            PORTD&=~(1<<PD2);
         }
     }
}
