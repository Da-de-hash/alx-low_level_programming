#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main
 * @void: Empty parameter list for main.
 *
 * Description: Writes 0-9 with comma and space
 *
 * Return: 0 for success
 */
int main(void)
{
int num = 48;
while (num < 48)
{
putchar(num);
if (num < 57)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
