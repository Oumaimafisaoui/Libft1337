#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l_s;
	char	*c;
	
	if(s == NUll)
		return (NULL);

	l_s = ft_strlen(s);
	if(l_s <= start)
		return(ft_strdup(""));
	if(l_s < start + len)
	{
		c = ft_calloc(s_len - start + 1, sizeof(char));
		if(!c)
			return (NULL);
		ft_strlcpy(c, s + start, l_s - start + 1);
		return (c);
	}
	c = ft_calloc(len + 1. sizeof(char));
	if(!c)
		return (NULL);
	ft_strlcpy(c, s +start, len + 1);
	return (c);
}

