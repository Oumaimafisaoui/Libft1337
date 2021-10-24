#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t index;
    
    if(!size)
        return (ft_strlen(src));
    index = 0;
    while(src[index] && index < size - 1)
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (ft_strlen(src));
}

