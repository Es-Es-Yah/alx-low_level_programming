#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
int main()
{
int sum = 0;
for (int i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
int temp_sum = sum;
int length = 0;
while (temp_sum != 0)
{
temp_sum /= 10;
length++;
}
char buffer[length];
int index = length - 1;
while (sum != 0)
{
buffer[index] = (sum % 10) + '0';
sum /= 10;
index--;
}
for (int i = 0; i < length; i++)
{
_putchar(buffer[i]);
}
_putchar('\n');
return 0;
}
