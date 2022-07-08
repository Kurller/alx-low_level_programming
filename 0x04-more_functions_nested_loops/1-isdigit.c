#include "main.h"

/**
* _isdigit - function that verifies if a character
*
* @c: tested character
*
* Return: return 1 or 0
*
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
return (0);
}
