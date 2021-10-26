#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t index;
	char	*alloc;
	size_t	l_s;

	index = 0;
	l_s = ft_strlen(s);
	if(s == NULL)
		return (NULL);
	alloc = (char *)malloc(len + 1);
	if(alloc == NULL)
		return (NULL);
	if(l_s > start)
	{
		while(s[start + index] && len > index)
		{
			alloc[index] = s[start + index];
			index++;
		}
	}
	alloc[index] = '\0';
	return (alloc);
}

