#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = (n * (-1));
	}
	else
	{
		res = n;
	}
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
	}
	ft_putchar_fd(res % 10 + '0', fd);
}

/*void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2',fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if(n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * 1;
	}
	else if (n < 10)
	{
		ft_putnbr_fd((char)(n + 48),fd);
	}
	else
	{
		ft_putchar_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
*/
