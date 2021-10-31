#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = ft_strlen((char*)s2);

	if(!len)
		return ((char*)s1);

	while(*s1 != '\0' && len <= n)
	{
		if(ft_strncmp(s1, s2, len) == 0)
			return ((char*)s1);
		n--;
		s1++;
	}
	return (NULL);
}


