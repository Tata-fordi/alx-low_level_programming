#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (succcess)
  */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar ('\n');
	return (0);
}
