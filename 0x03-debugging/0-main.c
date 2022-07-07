#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - entry point
 *@i:passed integer
 * Return:always 0
 *
 */


void positive_or_negative(int i)
{
int i;

srand(time(0));
n = i;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n, n");
}
if (n < 0)
{
printf("%d is negative\n, n");
}
return (0);
}
/**
 * main - entry point
 *
 * Return:return 0
 *
 */
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
