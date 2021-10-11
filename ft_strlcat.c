#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t l_dest;
	size_t l_src;
	size_t i;
	size_t j;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	
	i = 0;
	j = l_dest;

	if(l_dest < size - 1 && size > 0)
	{
		while(src[i] != '\0' && l_dest + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
			dest[j] = '\0';
		}
	}
	if(l_dest >= size)
		l_dest = size;
	return (l_dest + l_src);
}	
