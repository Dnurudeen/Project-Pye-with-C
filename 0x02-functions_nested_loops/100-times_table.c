#include "holberton.h"
/**
 *powB - raises the number base to power power
 *@base : the base
 *@power : the power
 *Return: return the answer
 */
int powB(int base, int power)
{
int i, prod = 1;

for (i = 0; i < power; i++)
{
prod = prod * base;
}
return (prod);
}

/**
 *numLenght - returns the lenght of string
 *@num : operand number
 *Return: number of digits
 */
int numLenght(int num)
{
int lenght = 0;

if (!num)
{
return (1);
}

while (num)
{
num = num / 10;
length += 1;
}


return (lenght);
}

/**
 *putchar - Print a number of any digit
 *@num : takes an input number
 *
 *
 */
void putchar(int num)
{
int length = numLength(num), j = length - 1, k, tmp2, digit1;

if (num == 0)
_putchar(48);
else
{
while (j >= 0)
{
if (num % powB(10, j) == 0 && j != 0)
{
_putchar(48 + num / powB(10, j));
for (k = j; k > 0 ; k--)
{
_putchar(48);
}
j = -1;
}
else
{
digit1 = num / powB(10, j);
_putchar(digit1 + 48);
tmp2 = num;
num = powB(10, j) * digit1;
if (numLength(tmp2) - numLength(num) == 2)
{
_putchar(48);
j--;
}
j--;
}
}
}
}

/**
 * print_times_table - print multiplication table for factor of n
 * @n: integer n
 */
void print_times_table(int n)
{
int i, j, prod, m;
if (n < 16 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
prod = i * j;
putchar(prod);
if (j != n)
{
_putchar(',');

for (m = 0; m < 4 - numLength(i * (j + 1)); m++)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
    
