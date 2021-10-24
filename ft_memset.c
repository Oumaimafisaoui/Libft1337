#include "libft.h"

//this function fills the first n bytes of the memory area pointed by s with theconstant byte c.
//line15 <=> *(unsigned char *)(s + index)=c  typcasting s to a pointers thta takes the adtress of a string then replace the element in the index with c

void	*ft_memset(void	*s, int c, size_t n)
{

	size_t index;

	index = 0;
	
	while(index < n)
	{
		((unsigned char *)s)[index] = c;
		index++;
	}
	return (s);
}
