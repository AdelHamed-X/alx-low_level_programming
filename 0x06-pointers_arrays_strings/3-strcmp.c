#include "main.h"

/**
 * _strcmp - compares  2 strings to each other
 *@s1: a pointer to sstring 1
 *@s2: a pointer to string 2
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int slen1, slen2, i, result;

	slen1 = slen2 = 0;

	while (s1[slen1] != '\0' && s2[slen2] != '\0')
	{
		if (s1[slen1] != s2[slen2])
		{
			break;
		}
		slen1++;
		slen2++;
	}
	result = s1[slen1] - s2[slen2]
	
	return (result);
}
