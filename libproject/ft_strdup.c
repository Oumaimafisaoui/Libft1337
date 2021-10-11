#include "libft.h"

char *ft_strdup(const char *str)
{
	size_t l_str;
	char *p;
	
	l_str = ft_strlen(s) + 1;
	p = ft_calloc(size, sizeof(char));
	if(p == NULL)
		return (NULL);
	ft_strlcpy(ptr, str, size);
	return (p);
}
