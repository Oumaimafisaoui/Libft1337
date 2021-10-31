#include "libft.h"

static	int	ft_words(char const *s, char c)
{
	int	counter;

	counter = 0;

	while(*s)
	{
		while(*s == c)
			s++;
		if(*s && *s != c)
			counter++;
		while(*s && *s != c)
			s++;
	}
	return counter;
}

static char **ft_freed(char **array, int n)
{
	while(n--)
		free(array[n]);
	free(*array);
	return (NULL);
}

static char *words_print(char const *s, char c)
{
	int index;
	char *res;

	index = 0;
	
	while (s[index] && s[index] != c)
		index++;
	res = malloc(sizeof(char) * index + 1);
	if(res)
	{
		ft_strlcpy(res,s, index + 1);
		return (res);
	}
	return (NULL);
}



char **ft_split(char const *s, char c)
{
	char **array;
	int	i;
	int	l_str;

	if(s)
	{
		l_str = ft_words(s, c);
		array = malloc(sizeof(char *) * (l_str + 1));

		if(array)
		{
			i = -1;
			while(++i < l_str)
			{
				while(s[0] == c)
					s++;
				array[i] = words_print(s, c);
				if(!array[i])
					ft_freed(array, i);
				s = s + ft_strlen(array[i]);
			}
			array[i] = 0;
			return (array);
		}
	}
	return (NULL);
}

