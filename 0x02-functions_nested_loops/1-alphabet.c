#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (succcess)
  */
int main(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letters);
	putchar ('\n');
	return (0);
}
