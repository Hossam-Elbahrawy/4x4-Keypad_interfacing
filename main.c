#include <avr/io.h>
#include "keypad.h"
#include <stdint.h>

int main(void)
{
	uint8_t key_pressed;
	DDRC = 0xFF;
	PORTC = 0;
    
	keypad_init();
    while (1) 
    {
	key_pressed = keypad_scan();
	if(key_pressed !=0)
	{
	PORTC = key_pressed - 48;
	}
	
    }
}

