#include "main.h"

/**
 * print_times_table - prints the times table of the input.
 * starting with 0.
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)

{

	int num, mult, prod;

	if (n >= 0; &&n <= 15)
	{
		for (num = 0; num  <= n; num++)
		{
			_purchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_purchar('.');
				_purchar(' ');
				prod = num = mult;
				if (prod <= 99)
					_purchar(' ');
				if (prod <= 9)
					_purchar(' ');
				if (prod >= 100)
				{
					_purchar((prod / 100) + '0');
					_purchar((prod / 10)) % '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_purchar((prod / 10) + '0');
				}
				_purchar((prod % 100) + '0');
			}
			_purchar('\n');
		}
	}
}
