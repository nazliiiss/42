#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	int i, j, k;
	i = k = 0;
	char **split;

	if (!(split = (char **)malloc(sizeof(char) * 256)))
		return (NULL);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc (sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = 0;
		k++;
	}
	split[k] = 0;
	return split;
}

int main(int ac, char **av)
{
	int i = 0;
	char **word;
	
	if(ac == 2)
	{
		word = ft_split(av[1]);
		while(word[i] != 0)
			i++;
		i--;
		while(i >= 0)
		{
			ft_putstr(word[i]);
			if(i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
}