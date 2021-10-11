#include "libft.h"

int	ft_memcmp(const void *str, const void *ptr, size_t n)
{
	unsigned char i;

	unsigned char *cast_str;
	unsigned char *cast_ptr;

	cast_str = (unsigned char *)str;
	cast_ptr = (unsigned char *)ptr;

	if(str == NULL && ptr == NULL)
	       return 0;	
	i = 0;
	while(i < n)
	{
		if(cast_str[i] != cast_ptr[i])
			return(*(cast_str + i) - *(cast_ptr + i));
		i++;
	}
	return (0);
}
