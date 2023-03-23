#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
void print_alphabet()
{
    for(char i = 'a'; i <= 'z'; i++)
      _putchar(i);
   _putchar('\n');
}
