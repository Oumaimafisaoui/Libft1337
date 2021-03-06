#include "libft.h"

char *ft_substr(char const  *s, unsigned int start, size_t len)
{
	size_t	l_s;
	char	*res;


	l_s = ft_strlen(s);
	if(start > l_s || len <= 0)
		return (ft_strdup(""));
	if((start + len) > l_s)
	{
		res = (char *)ft_calloc(l_s - start + 1, sizeof(char));
		if(!res)
			return (NULL);
		ft_strlcpy(res, s + start, l_s - start + 1);
		return (res);

	}

	res = (char *) ft_calloc(len + 1, sizeof(char));
	if(!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}


