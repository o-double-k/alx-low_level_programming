#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar with prototype for _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char array[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
{
_putchar(array[c]);
}
_putchar('\n');
return (0);
