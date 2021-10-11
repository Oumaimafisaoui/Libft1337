#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *cast_d;
	char *cast_s;

	if(dest == NULL && src == NULL && n)
		return (dest);

	cast_s = (char *)src;
	cast_d = (char *)dest;

	if(cast_s < cast_d)
	{
		while(n--)
			cast_d[n] = cast_s[n]; //start copying backword
	}
	else
		ft_memcpy(cast_d, cast_s, n);
	return (dest);
}

int main()
{
   char csrc[100] = "Geeksfor";
   ft_memmove(csrc+5, csrc, ft_strlen(csrc)+1);
   printf("%s", csrc);
   return 0;
}
