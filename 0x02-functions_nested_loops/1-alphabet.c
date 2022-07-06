#include <stdio.h>
#include <main.h>

/**
 * main - prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		print_alphabet(ch);
	}
	putchar('\n');
	return (0);
}
