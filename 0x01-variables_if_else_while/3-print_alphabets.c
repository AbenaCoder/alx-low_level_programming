#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the alphabetic in lower and upper case
*
* Return: Always (Success)
*
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
