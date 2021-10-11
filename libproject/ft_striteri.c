#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t c;

	if(!s || !f)
		return ;
	c = 0;
	while(s[c])
	{
		f(c, s + c);
		c++;
	}

}
