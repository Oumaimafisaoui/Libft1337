#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *cast_dest;

	if(dest == NULL && src == NULL && n)
		return (dest);


	cast_dest = (char *)dest;
	i = 0;
	while(i < n)
	{
		*(cast_dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}

