#include "libft.h"

char	*ft_strchr(const char *str, int n)
{
	int l_str;

	l_str = ft_strlen(str);
	while(l_str >= 0)
	{
		if((unsigned char)*str == (unsigned char)c)
			return ((char *)str);
		str++;
		l_str--;
	}
	return (NULL);

}
