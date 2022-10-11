#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int L;
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
char z[100] = "Last digit of";
char s[100] = "is";
if (L > 5)
{printf("%s %d %s %d and is greater than 5\n", z, n, s, L);
}
else if (L == 0)
{printf(" %s %d %s %d and is 0\n", z, n, s, L);
}
else
{printf(" %s %d %s %d and is less than 6 and not 0\n", z, n, s, L);
}
return (0);
}
