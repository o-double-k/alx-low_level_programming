#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
char a;
for (a = 0; a < 10; a++)
putchar('0' + a);
for (a = 'a'; a <= 'f'; a++)
putchar(a);
putchar('\n');
return (0);
}
