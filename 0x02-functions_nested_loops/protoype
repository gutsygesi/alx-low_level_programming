#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	_putchar('\n');
	}
	
}
void print_alphabet_x10(void)
{
	int n, co;
	co = 0;
	while (co < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	co++;
	_putchar('\n');
	}
}
