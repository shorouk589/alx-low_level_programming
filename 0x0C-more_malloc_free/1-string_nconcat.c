#include "main.h"
#include <stdio.h>

/**
 * string_noconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return:pointer to space in memory conctaining concatened string.
 */
char *string_noconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s2_length, s1_length;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		S2 = "";
	/*compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	/*Memory reservatio-for case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second stringg into str.*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
