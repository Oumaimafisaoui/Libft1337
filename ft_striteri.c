#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int c;

	if(!s || !f)
		return ;
	c = 0;
	while(s[c] != '\0')
	{
		f(c, s + c);
		c++;
	}

}
