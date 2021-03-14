/*
 * my_first.c
 *
 * Created: 29-01-2021 15:23:47
 * Author : Tamanna Dave
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB=0XFF;
    while (1) 
    {
		PORTB=0XFF;
		_delay_ms(1000);
		PORTB=0X00;
		_delay_ms(1000);
    }
}

