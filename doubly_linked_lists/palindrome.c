#include <stdio.h>
int is_palindrome(int result)
{
	int array[6], i = 0, j = 0;

	for (i = 0; i < 6; i++)
	{
		array[i] = result % 10;
		result = result / 10;
	}
	i--;
	while (array[i] == 0)
		i--;
	while (i > j)
	{
		if (array[i] != array[j])
			return (0);
		i--;
		j++;
	}
	return (1);
}
int main(void)
{
	int a = 1, b = 1, mem = 0;;

	for (; a < 1000; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (is_palindrome(a * b) && a * b > mem)
			{
				printf("%3d * %3d = %d\n", a, b, a * b);
				mem = a * b;
			}
		}
	}

}
