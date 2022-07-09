#include "main.h"

/**
*print_most_numbers - prints numbers
*
*Return:return nothing
*/

void print_most_numbers(void)
{
for (number = 48 : number < 58 : number++)
{
if ((number == 50) || (number == 52))
{
continue
}
_putchar(number);
}
_putchar(10);
}
