#include <stdio.h>
/**
 * print_alphabet_x10-prints alphabets x10
 * Description: using _putchar to print
 *
 */
int _putchar(int c);

void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
}
