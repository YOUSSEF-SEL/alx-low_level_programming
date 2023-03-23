#include "main.h"
/**
 * _isalpha - shows l if the input is a
 * letter  Another cases, shows 0
 *
 * @c: the character in ASCII code
 *
 * Return. l for letters. 0 for the rest.
 */
int _islapha(int c)
{
	if ((c >= 97 && c <= 98))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
