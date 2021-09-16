#ifndef _ACTIVITY1_H
#define _ACTIVITY1_H

#define AVR_ATmega328

#include <avr/io.h>

#define SENSOR_ON !(PIND&(1<<PD4))


#define HEATER_ON !(PIND&(1<<PD0))


#define SET_LED PORTD|=(1<<PD2)

#define CLEAR_LED PORTD&=~(1<<PD2)

void ButtonsHeat_LED_Init();


#endif //ACT1_H_INCLUDED
