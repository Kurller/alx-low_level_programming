#include "main.h"
/**
 * _strncpy - C function that copies a string,including the
 * termination null byte,using at most inputted number of bytes.
 * if the length of the source string is less than the maximumbyte number,
 * the reminder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncpy'.
 * @dest:buffer storing the copy
 * @src:the source string
 * @n:max number of byte copied
 * Return:returns
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
