#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 98)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}	
