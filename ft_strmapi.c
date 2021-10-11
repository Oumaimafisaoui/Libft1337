#include "libft.h"

char ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *arr;
	size_t c;

	if(!s || !f)
		return (NULL);
	c = 0;
	arr = ft_strdup(s);
	if(arr == NULL)
		return (NULL);
	while(arr[c] != 0)
	{
		arr[c] = f(c, arr[c]);
		c++;
	}
	return (arr);
}
