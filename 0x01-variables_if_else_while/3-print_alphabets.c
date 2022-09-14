#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alpha = 'a';
	char cAlpha = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (cAlpha = 'A'; cAlpha <= 'Z'; cAlpha++)
		putchar(cAlpha);

	putchar('\n');

	return (0);
}
