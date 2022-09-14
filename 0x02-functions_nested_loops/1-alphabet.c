#include <stdio.h>
#include "main.h"

/**
 * print_alphabet : this function would print the alphabet
 * return : 0
 */

void print_alphabet(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
    		int lower_x = tolower(x);
    		_putchar(lower_x);
		_putchar('\n');
	}

}
