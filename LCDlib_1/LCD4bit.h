/*
 * LCD4bit.h
 *
 * Created: 27.03.2024 20:30:12
 *  Author: igora
 */ 

#include <avr/io.h>
#include <util/delay.h>

#ifndef LCD4BIT_H_
#define LCD4BIT_H_

#include "src/ValuerFile.h"


void sentRequest(){
	Command_PORT |= (1 << E);
	_delay_us(0.15);
	Command_PORT &= ~(1 << E);
}

void initLCD4bit();

void test_one_out_A();

#endif /* LCD4BIT_H_ */