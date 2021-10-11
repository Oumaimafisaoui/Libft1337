#include "libft.h"

char *ft_strtrim(char const *s1, char const *s2)
{
	size_t i;

	if(s1 == NULL || s2 == NULL)
		return (NULL);
	while(*s1 && ft_strchr(s2, *s1))
		s1++;
	i = ft_strlen(s1);
	while(i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1);
}
