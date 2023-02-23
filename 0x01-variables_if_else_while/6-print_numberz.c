#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print all single digit numbers of base 10 starting from 0
*
* Return - Always Success(0)
*
*/

int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar("%d", n);
putchar("\n");
return (0);
}
