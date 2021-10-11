#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		*(unsigned char *)(s + i++) = c; //this line, first add the index i to the adress if the first else;ntin the string which is str and keep incremeanting the index, after typcasting the void pointer to const char and replacing it with the element c untill reaching n minus one because we start from zero.
	}
	return (s);
}

