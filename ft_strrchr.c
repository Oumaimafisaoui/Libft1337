#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int l_str;

	l_str = ft_strlen(str);

	while(l_str >= 0)
	{
		if(str[l_str] == (char)n)
			return ((char*)str + l_str);
		l_str--;
	}
	return(0);
}
