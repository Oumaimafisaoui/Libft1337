#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t idx;

	idx = 0;
	while(idx < n && (s1[idx] != '\0' || s2[idx] != '\0'))
	{
		if(s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}

