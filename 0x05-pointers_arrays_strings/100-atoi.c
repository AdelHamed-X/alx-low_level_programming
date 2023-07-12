#include "main.h"

/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int i, result, sign, len;

	len = 0;
	result = 0;
	while (s[len] == '\0')
	{
		len++;
		if (s[len] == '-')
		{
			sign = -1;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i];
		}
		else
		{
			return (0);
		}
	}
	return (result * sign);
}
