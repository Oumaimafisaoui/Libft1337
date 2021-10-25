#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *str, const void *ptr, size_t n)
{
	size_t  idx;

	unsigned char *cast_str;
	unsigned char *cast_ptr;

	cast_str = (unsigned char *)str;
	cast_ptr = (unsigned char *)ptr;

	if(str == NULL && ptr == NULL)
	       return 0;	
	idx = 0;
	while(idx < n)
	{
		if(cast_str[idx] != cast_ptr[idx])
			return(*(cast_str + idx) - *(cast_ptr + idx));
		idx++;
	}
	return (0);
}

int main () {
   char str1[15];
   char str2[15];
   int ret;
   int l;

   memcpy(str1,"abcd", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);
   l = ft_memcmp(str1, str2,5);


   printf("%d", ret);
   printf("%d", l);
   
   return(0);
}
