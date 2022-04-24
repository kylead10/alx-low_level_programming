#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  C function that prints the content of an
 * inputted number of bytes from a buffer.
 * Prints 10 bytes per line.
 * Starts with the position of the first byte in hexadecimal (8 chars),
 * starting with `0`.
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space.
 * Each line shows the content of the buffer.
 * Prints the byte if it is printable; if not, prints `.`.
 * Each line ends with a new line `\n`.
 * If the inputted byte size is 0 or less, the function only prints a new line.
 * @b: number of bytes
 * @size: size of the byte
 */

void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
