/**
 * @file act1.c
 * @author Manoj Hunasimarad
 * @brief Activity 3
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

#define PWM_20_PERCENT (205) /**< This will bring PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< This will bring PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< This will bring PWMWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< This will bring PWM for 95% duty cycle */


#include <util/delay.h>
#include <avr/io.h>


void Init_Timer();

/**
 * @brief Produce duty cycle in PWM according to input ADC value
 *
 * @param[in] temp The ADC value from Activity_2
 */
void PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
