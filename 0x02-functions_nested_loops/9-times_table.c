
#include "main.h"
/**
* main - print  9 times table starting with 0
*/ 
void times_table(void)
{
int i = 0;
for (i = 0; i < 10 ; i++)
{
_putchar((9 * i) + '0');
_putchar("\n");
}
}
