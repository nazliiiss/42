
#include <stdlib.h>

int to_abs(int c)
{
	if (c < 0)
		return (-c);
	return c;
}

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len = abs(start - end);
	int *res= (int *)malloc(sizeof(int) * len);

	if (!res)
		return NULL;
	
	while (start < end)
	{
		res[i] = end;
		end--;
		i++;
	}
	while (start >= end)
	{
		res[i] = end;
		end++;
		i++;
	}
	return res;
}