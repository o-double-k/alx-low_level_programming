#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)

{
	int b = 0;

	int q;

	if (size > 0)
	{
		for (; b < size; b++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
