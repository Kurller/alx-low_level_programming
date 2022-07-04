#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n == 'q' || n == 'e')
{
continue;
}

putchar(n);

return (0);
}
}
