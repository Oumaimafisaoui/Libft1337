#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if(n == INT_MIN)
		write(fd,"INT_MAX",11);
	else
	{
		if(n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if(n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}