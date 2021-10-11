#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char s;

	s = (unsigned char *)str;

	i = 0;
	while(i < n)
	{
		if(*(s + i)= (unsigned char)c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
