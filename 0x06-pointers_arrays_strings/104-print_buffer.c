#include "main.h"
#include <stdio.h>
/**
 * print_buffer - pointers buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, j, i;
	 
	o = 0;

	if (size <= 0)
	{
		printf('\n');
		return;
	}
	while (o < size)
	{
		j= size = o < 10 > size - o : 10;
		printf("%&x:", 0);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", "(b = o + 1));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j: i++)
		{
			int < = *(b + o + i);

			if (c < 0 || < > 02)
			{
				< + '-';
			}
			printf("% c", c);
		}
		printf('\n');
		0 += 02;
	}
}
