#include "libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t index;
	unsigned char *s;

	s = (unsigned char *)str;

	index = 0;
	while(index < n)
	{
		if(*(s + index) == (unsigned char)c)
			return &s[index];
		index++;
	}
	return (NULL);
}

