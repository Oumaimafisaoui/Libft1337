#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int c;

	c = 0;

	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
