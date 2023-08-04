/*
 * DIOApp.c
 *
 * Created: 7/22/2023 9:19:53 AM
 * Author : Khaled Eyada
 */ 

#define F_CPU 8000000
#include <avr/io.h>

#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "BIT_MATH.h"
#include "util/delay.h"

int main(void)
{
    /* Replace with your application code */
	
	DIO_voidSetPinDirection(DIO_u8_PORTA,DIO_u8_PIN4,DIO_u8_OUTPUT); // setting bit 4 in port A direction to output
	DIO_voidSetPortDirection(DIO_u8_PORTC,DIO_u8_OUTPUT); // setting port C direction as output
    while (1) 
    {
		
		DIO_voidSetPinValue(DIO_u8_PORTA,DIO_u8_PIN4,DIO_u8_HIGH);/*Setting pin 4 in port A which is connected to a led to 5v (HIGH)*/
		DIO_voidSetPortValue(DIO_u8_PORTC,DIO_u8_HIGH);
		_delay_ms(1000);/*wait 1 second*/
		DIO_voidSetPinValue(DIO_u8_PORTA,DIO_u8_PIN4,DIO_u8_LOW);/*Setting pin 4 in port A which is connected to a led to 0v (LOW)*/
		DIO_voidSetPortValue(DIO_u8_PORTC,DIO_u8_LOW);/*Setting port C which is connected to a 2 relays, and a buzzer  to 0v (LOW)*/
		_delay_ms(1000);
    }
}

