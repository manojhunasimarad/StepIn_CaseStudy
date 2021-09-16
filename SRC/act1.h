#ifndef _ACTIVITY1_H
#define _ACTIVITY1_H

#define AVR_ATmega328

#include <avr/io.h>

/**
 * @brief A macro to check if the button is pressed or not.
 *
 */
#define SENSOR_ON !(PIND&(1<<PD4))

/**
 * @brief A macro to check if the heater is pressed or not.
 *
 */
#define HEATER_ON !(PIND&(1<<PD0))

/**
 * @brief A macro to turn on the LED
 *
 */
#define SET_LED PORTD|=(1<<PD2)

/**
 * @brief A macro to turn off the LED
 *
 */
#define CLEAR_LED PORTD&=~(1<<PD2)

void Buttons_LED_Init();


#endif //ACT1_H_INCLUDED
