#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned l_s1;
	unsigned l_s2;
	char		*s3;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	s3 = malloc(l_s1 + l_s2 + 1);

	if(!s3)
		return (NULL);
	i = 0;
	while(s1[i] != 0)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j] != 0)
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return(s3);
}
