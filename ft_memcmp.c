#include "libft.h"

int	ft_memcmp(const void *str, const void *ptr, size_t n)
{
	size_t  idx;

	unsigned char *cast_str;
	unsigned char *cast_ptr;

	cast_str = (unsigned char *)str;
	cast_ptr = (unsigned char *)ptr;

	if(str == NULL && ptr == NULL)
	       return 0;	
	idx = 0;
	while(idx < n)
	{
		if(cast_str[idx] != cast_ptr[idx])
			return(*(cast_str + idx) - *(cast_ptr + idx));
		idx++;
	}
	return (0);
}
