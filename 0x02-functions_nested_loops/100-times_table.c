 #include "main.h"
/**
 * print_time_table - prints the n times table,
 * starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
			printf("%d\t", i * j);
		printf("\n");
	}
}
