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
#include "act3.h"
#include "act4.h"
void Init_Timer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void PWM(uint16_t temp)
{
    Init_Timer();
    if(temp>=0 && temp<=200){
            OCR1A = PWM_20_PERCENT;
             USARTWritecharacter(temp);
            _delay_ms(200);
        }
        else if(temp>=210 && temp<=500){
             OCR1A = PWM_40_PERCENT;
            USARTWritecharacter(temp);
            _delay_ms(200);
        }
        else if(temp>=510 && temp<=700){
             OCR1A = PWM_70_PERCENT;
              USARTWritecharacter(temp);
            _delay_ms(200);
        }
        else if(temp>=710 && temp<=1024){
             OCR1A = PWM_95_PERCENT;
              USARTWritecharacter(temp);
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }

}
