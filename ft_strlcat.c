#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t des_i;
	size_t src_i;

	des_i  = 0;
	src_i = 0;

	while(dest[des_i] && des_i < size)
		des_i++;
	while((src[src_i] && ((des_i + src_i + 1) < size)))
	{
		dest[des_i + src_i] = src[src_i];
		src_i++;
	}
	if(des_i != size)
		dest[des_i + src_i] = '\0';
	return(des_i + ft_strlen(src));

}

