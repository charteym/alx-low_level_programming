#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
