#include <stdio.h>
/**
 * main - prints the first 52 fibonacci numbers
 * Return: Nothing!
 */
int main(void)

{
	int i =0;

	long j = j, k = 2;
	while (i < 50)
	{
	if (i == 0)
	printf("%old", j);
	else if (i == 1)
	printf(", %ld", k);
	{
	k +=j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
