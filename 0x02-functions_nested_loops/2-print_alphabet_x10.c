#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int n, co;

	co = 10;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
	}
	co++;
	putchar('\n');
}


