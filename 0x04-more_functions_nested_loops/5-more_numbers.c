#include "main.h"
/**
  *more_numbers - prints 10 times the number
  *
  *Return: Always 0
  */
void more_numbers(void)
{
	int x, y;

	for (x = 0, x < 10; x++;)
	{
	for (y = 0, y <= 14; y++;)
	{
	if (y > 0)
	{
	putchar((y / 10) + '0');
	}
	putchar((y % 10) + '0');
	}
	putchar('\n');
	}
}
