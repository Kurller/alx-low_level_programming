
#include "main.h"
/**
* main - print  9 times table starting with 0
*/ 
void times_table(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10; j++)
{
_putchar(i * j);
_putchar(' ');
}
}
}
