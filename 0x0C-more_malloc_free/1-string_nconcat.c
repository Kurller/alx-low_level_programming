
#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string:string
 * Return:string length
 */
int _strlen(char *string)
{
int i;
for (i = 0; string[i] != '\0'; i++)
           ;
return (i);
}
/**
 * string_nconcat - this is string concatenation
 * @s1: param 1
 * @s2: param 2
 * @n:param 3
 * Return:string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int num, len, i, j;
char *ptr;
num = n; 
if (s1 == NULL) /* account for NULL string */
s1 == "";
if (s2 == NULL)
s2 == "";
if (num < 0) /*account for negative n bytes*/
return (NULL);
if (num >= strlen(s2)) /* account for n too big */
num = _strlen(s2)
len = _strlen(s1) + num + 1;
ptr = malloc(sizeof(*ptr) * len);
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i]
for (j = 0; j < num; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
