#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name_as_is - prints a name as is
 *
 * @name: name of the person
 * Return: Nothing.
 *
 */

void print_name_as_is(char *name)
{
for (int i = 0;name[i] != '\0'; i++)
{
 _putchar(name[i]);
}
}
