#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{ char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{i
putchar(ch);
}
}
putchar(10);
return (0);
}


