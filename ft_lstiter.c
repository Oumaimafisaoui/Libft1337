#include "libft.h"

void	ft_lstitier(t_list *lst, void (*f)(void *))
{

	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
