#include "_putchar"

/**
 * main - program that prints _putchar, followed by a new line
 * 
 * Return: 0
 */

int main(void)
{
	int n = 0;
	char str_ptc[8] = "_putchar";

	while (n < 9)
	{
		_putchar(str_ptc[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
