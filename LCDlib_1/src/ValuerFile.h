/*
 * ValuerFile.h
 *
 * Created: 27.03.2024 20:31:04
 *  Author: igora
 */ 



#ifndef VALUERFILE_H_
#define VALUERFILE_H_

#define Data_PORT PORTC
#define Data_DDR DDRC
#define Data_PIN PINC

#define Command_PORT PORTC
#define Command_DDR	DDRC
#define Command_PIN PINC


#define DB4 0
#define DB5 1
#define DB6 2
#define DB7 3

#define E 4
#define RW 5
#define RS 6

#define ID 1
#define S 0

#define D 2
#define C 1
#define B 0

#define SL 3
#define RL 2

#define DL 4
#define N 3
#define F 2

#define BF 3

#define CGRAM_COM 0x40
#define DDRAM_COM 0x80

#define Clear_COM 0x01




#endif /* VALUERFILE_H_ */