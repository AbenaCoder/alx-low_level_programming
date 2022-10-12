#include "main.h"
/* Prints alphabets 10 times
*
* Return a new line
*/
void print_alphabet_x10(void)
{
int letter;
int i;

for (i = 0; i <= 9; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar ('\n');
}
}
