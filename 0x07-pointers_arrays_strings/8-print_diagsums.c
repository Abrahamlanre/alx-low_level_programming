#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix of ints
 * @a: the matrix of ints
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i = 0, j = size - 1, sum1 = 0, sum2 = 0;
while (i <= (size * size))
{
sum1 = sum1 + a[i];
i = i + size + 1;
}
while (j < (size * size - 1))
{
sum2 += a[j];
j = j + size - 1;
}
printf("%d, %d\n", sum1, sum2);
}
