#include <stdio.h>
/**
 * main - a program that prints all digit numbers of base 10
 *
 * Return: always (0)
 *
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
