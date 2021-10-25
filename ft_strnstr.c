#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	if(!s2)
		return ((char*)s1);
	len = ft_strlen((char*)s2);
	while(*s1 != '\0' && n >= len)
	{
		if(*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char*)s1);
		n--;
		s1++;
	}
	return (NULL);
}


int main()
{
	char ki[] = "hey mom";
	char ko[] = "mom";

	
	char *p;
	char *k;

	p = ft_strnstr(ki, ko, 8);
	k = strnstr(ki, ko, 8);

	printf("%s",p);
	printf("%s",k);
}
