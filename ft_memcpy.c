#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char *cast_dest;

	if(dest == NULL && src == NULL && n)
		return (dest);


	cast_dest = (char *)dest;
	index = 0;
	while(index < n)
	{
		*(cast_dest + index) = *(char*)(src + index);
		index++;
	}
	return (dest);
}

