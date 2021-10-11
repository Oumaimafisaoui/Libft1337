#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t l_s2;

	i = 0;
	l_s2 = ft_strlen(s2);
	if(!l_s2)
		return ((char*)s1);
	if(n != 0)
	{
		while(s1[i] && i < n - l_s2)
		{
			j = 0;
			while(s2[j] && s2[j] == s1[i + j])
				j++;
			if(j == l_s2)
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}
