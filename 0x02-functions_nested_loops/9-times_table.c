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
int a;
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n; j++)
{
a = i * j;
_putchar(a);
}
_putchar("\n");
}
}
