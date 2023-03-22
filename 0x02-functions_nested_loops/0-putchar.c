#include "main.h"
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 means no errors.
*/
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
