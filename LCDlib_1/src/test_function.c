/*
 * test_function.c
 *
 * Created: 28.03.2024 20:48:35
 *  Author: igora
 */ 

#include "../LCD4bit.h"

//test output info
void test_one_out_A(){
	
	
	
	_delay_ms(50);

	Data_DDR |= (1 << DB7) | (1 << DB6) | (1 << DB5) | (1 << DB4);
	Data_PORT &= ~((1 << DB7) | (1 << DB6) | (1 << DB5) | (1 << DB4));
	
	Command_DDR |= (1 << RS) | (1 << RW) | (1 << E);
	Command_PORT &= ~((1 << RS) | (1 << RW) | (1 << E));
	

	// wait set DDRAM and move on 0x00
	
	Data_PORT |= (1 << DB7);
	sentRequest();
	Data_PORT = 0x00;
	sentRequest();
	_delay_ms(30);
	
	
	
	Command_PORT |= (1 << RS);
	
	Data_PORT |= (1 << DB6);
	sentRequest();
	
	Data_PORT &= ~(1 << DB6);
	Data_PORT |= (1 << DB5) | (1 << DB4);
	
	sentRequest();
	_delay_ms(20);
	
	
	Data_PORT &= ~((1 << DB7) | (1 << DB6) | (1 << DB5) | (1 << DB4));	
	Command_PORT &= ~((1 << RS) | (1 << RW) | (1 << E));

	
}