
#include "main.h"

/**
 * swap_int - function that swaps the value of two value
 * @a: this is the first entry
 * @b: this is the second entry
 *
 *
 */

void swap_int(int *a, int *b)
{
int changed;
changed = *a;
*a = *b;
*b = changed;
}
