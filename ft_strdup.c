#include "libft.h"

char *ft_strdup(const char *str)
{
	size_t l_str;
	char *p;
	
	l_str = ft_strlen(str) + 1;
	p = ft_calloc(l_str, sizeof(char));
	if(p == NULL)
		return (NULL);
	ft_strlcpy(p, str, l_str);
	return (p);
}
