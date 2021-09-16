#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include<avr/io.h>

/**
 * @brief to read the adc values
 *
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief initialise the analog to digital converter
 *
 */
void InitADC();

#endif // ACT2_H_INCLUDED
