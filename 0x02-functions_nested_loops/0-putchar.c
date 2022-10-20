
#include "main.h"
/**
 * main - print_putchar
 * is written by bwave
 * return: 0
 */
* main - wrties the string "_putchar" to stdout
* @string - the string to be printed to standard ouput
* Return: returns 0 after printing the string
*/
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
