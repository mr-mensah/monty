#include "monty.h"
#include <stdlib.h>
/**
 * char_intgetter - function that points to the new int
 * @num: number
 * Return: new
 */
char *char_intgetter(int num)
{
unsigned int temp;
int len = 0;
long num_l = 0;
char *new;
temp = value_abso(num);
len = buffleng(temp, 10);
if (num < 0 || num_l < 0)
len++;
new = malloc(len + 1);
if !new)
return (NULL);
buff_fill(temp, 10, new, len);
if (n0 || num_l < 0)
et[0] = '-';
return (new);
}
/**
 * value_abso - function that returns the absolute
 * @i: integer
 * Return: integer
 */
unsigned int value_abso(int i)
{
if (i < 0)
return (-(unsigned int)i);
return ((unsigned int)i);
}
/**
 * buffleng - function to get buffer
 * @num: number
 * @base: base
 * Return: len
 */
int buffleng(unsigned int num, unsigned int base)
{
int len = 1;
while (num > base - 1)
{
len++;
num /= base;
}
return (len);
/**
 * buff_fill - function that fills buffer
 * @num: number
 * @base: base
 * @buff: buffer
 * @buff_size: size
 * Return: null
 */
void buff_fill(unsigned int num, unsigned int base,
r *buff, int buff_size)
int rem, i = buff_size - 1;
buff[buff_size] = '\0';
while (i >= 0)
{
rem = num % base;
if (rem > 9)
buff[i] = rem + 87;
else
buff[i] = rem + '0';
num /= base;
i--;
}
}
