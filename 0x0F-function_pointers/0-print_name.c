#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 *
 * @name: name of the person
 * Return: Nothing.
 *
 */

void print_name_as_is(char *name)
{
char s[20];
int i = 0;
while ((s[i] = getchar()) != '\n')
{ 
if (s[i] != '\0')
{
putchar(s[i]);
}
i++;
}
}
