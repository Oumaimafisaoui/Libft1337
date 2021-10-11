#include "libft.h"

static	int	array_str(const char *str, char delimiter);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	unsigned int i;
	unsigned int j;

	arr = (char **)ft_calloc(str_in_array(s,c) + 1, sizeof(char*(+)));
	if(!arr)
		return NULL;
	j = -1;
	while(*s)
	{
		if(*s == c)
			s++;
		else
		{
			j = 0;
			while(*s != c && *s)
			{
				s++;
				i++;
			}
			arr[++j] = (char*) ft_calloc(i + 1, sizeof(char));
			ft_strlcpy(arr[j], s - i, i + 1);
		}
	}
	return (arr);
}

static	int	array_str(const char *str, char delimiter)
{
	unsigned int	k;

	k = 0;
	while(*str)
	{
		if(*str == delimeter)
			str++;
		else
		{
			while(*str != delimiter && *str)
				str++;
			k++;
		}
	}
	return (k);
}
