/*
 * lcd_frei_mc_net.c
 *
 * Created: 03.07.2018 22:45:48
 * Author : Jo
 */ 

#include <avr/io.h>
#include "lcdroutines.h"


int main(void)
{
	lcd_init();
	lcd_clear();
	lcd_home();
	lcd_string("LCD WORKS!");
	
    while (1) 
    {
    }
}

