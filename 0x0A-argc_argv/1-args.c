#include <stdio.h>
#include <stdib.h>
/**
 * main - prints the minimum num of coins
 * to make change for an amount of money.
 * @argc:num of command line arguments.
 * @argv:pointers to an array of command line arguments.
 * Return:0-success, non-zero-fail.
 */

int main(argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi (argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf9("Error\n");
		return (1);
	}
	return (0);
}
