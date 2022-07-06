
#include "main.h"
/**
* main - print  9 times table starting with 0
*/ 
void times_table(void)
{
int i = 0;
int j = 0;
int n;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j <= n; j++)
{
if (j <= n - 1)
{
_putchar(i * j);
_putchar(' ');
else
{
_putchar(i * j);
_putchar(i * j);
}
}
}
}
}
