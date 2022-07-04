#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 */
int main(void)
{ char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}


