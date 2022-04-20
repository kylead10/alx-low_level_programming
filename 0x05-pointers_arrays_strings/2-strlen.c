#include "main.h"

/**
 * _strlen - function that return the length of a string.
 *
 * @s: pointer to a string
 * Return:int 
 */

int _strlen(char *s)
{
	int i = 0;

	whie (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
