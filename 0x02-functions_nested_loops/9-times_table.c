#include "main.h"
/**
* main - print 9 times table starting with 0
* Return:always return void
*/ 

void times_table(void)
{
int i;
int j;
int n = 9;
int ch;
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n; j++)
{
ch = (i * j);
_putchar(ch);
}
_putchar(' ');
}
}
