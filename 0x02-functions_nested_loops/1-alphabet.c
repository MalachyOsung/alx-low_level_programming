#include <stdio.h>
#include "main.h"

/**
 * print_alphabet : this function would print the alphabet
 * return : 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		_putchar("\n");
		ch++;
	}

}
