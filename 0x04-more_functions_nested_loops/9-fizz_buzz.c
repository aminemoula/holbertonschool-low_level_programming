#include "stdio.h"
/**
* main - FizzBuzz
*
* Return: 0
*/
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
_printf("FizzBuzz");
else if (a % 3 == 0)
_printf("Fizz");
else if (a % 5 == 0)
_printf("Buzz");
else
_printf("%d", a);
if (a < 100)
_printf(" ");
}
_printf("\n");
return (0);
