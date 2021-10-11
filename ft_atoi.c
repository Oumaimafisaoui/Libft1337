#include "libft.h"

int ft_atoi(const char *dest)
{
	int	sign;
	int 	result;
	int	i;

	i = 0;
	if(*dest == 0)
		return (0);
	while (dest[i] ' ' || (dest[i] >= 9 && dest[i] <= 13))
		i++;
	sign = 1;
	if(dest[i] == + || dest[i] == '-')
	{
		if(dest[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while(dest[i] <= '9' && dest[i] >= '0')
	{
		result *= 10;
		result = result + dest[i] - 48;
		i++;
	}
	return (result * sign);

}

