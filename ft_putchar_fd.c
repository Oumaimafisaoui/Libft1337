#include "libft.h"

void	ft_ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
