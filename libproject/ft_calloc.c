#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc(num * size);
	if(p == 0)
		return (p);
	ft_bzero(p, num * size);
	return (p);

}
