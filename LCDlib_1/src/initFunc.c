/*
 * LCDlib_1.c
 *
 * Created: 27.03.2024 20:04:00
 * Author : igora
 */ 



#include "../LCD4bit.h"

void initLCD4bit(){
	//Power
	_delay_ms(50);
	Data_DDR |= (1 << DB7) | (1 << DB6) | (1 << DB5) | (1 << DB4);
	Data_PORT &= ~((1 << DB7) | (1 << DB6) | (1 << DB5) | (1 << DB4));
	
	Command_DDR |= (1 << RS) | (1 << RW) | (1 << E);
	Command_PORT &= ~((1 << RS) | (1 << RW) | (1 << E));
	
	// First init 
	Data_PORT |= (1 << DB5) | (1 << DB4);
	sentRequest();
	_delay_ms(5);
	sentRequest(); 
	_delay_us(120);
	sentRequest();
	_delay_us(50);
	
	//End

	//Setup func
	
	Data_PORT = 0x00;
	Data_PORT |= (1 << DB5);
	
	sentRequest();
	_delay_us(50);
	
	//----------------------
	
	sentRequest();
	
	Data_PORT &= (1 << DB5);
	
	Data_PORT |= (1 << DB7);
	
	sentRequest();
	_delay_us(50);
	
	//-----------------------
	
	Data_PORT = 0x00;
	sentRequest();
	Data_PORT |= (1 << DB7) | (1 << D);
	sentRequest();
	_delay_us(50);	
	
	//------------------------
	Data_PORT = 0x00;
	sentRequest();
	Data_PORT |= (1 << DB6);
	sentRequest();
	_delay_us(50);
	
	//clear
	
	Data_PORT = 0x00;
	sentRequest();
	Data_PORT |= (1 <<DB4);
	sentRequest();
	_delay_ms(50);
}

