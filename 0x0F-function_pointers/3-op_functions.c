#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subctracts two numbers
 * @a: First number
 * @b: Second number
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: Multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First number
 * @b: Second number
 * Return: Division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of the division
 * @a: First number
 * @b: Second number
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
