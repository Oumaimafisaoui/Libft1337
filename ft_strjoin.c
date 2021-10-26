#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *buff;
	size_t 	i;
	size_t	j;
	size_t	len;	
	
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if(!s1 || !s2)
		return (NULL);
	buff = malloc(sizeof(char) * len + 1);
	if(!buff)
		return (NULL);
	while(s1[i])
		buff[j++] = s1[i++];
	i = 0;
	while(s2[i])
		buff[j++] = s2[i++];
	buff[j] = '\0';
	return (buff);

}

