#include "libft.h"

void	ft_lstitier(t_list *lst, void (*f)(void *))
{
	t_list *p;

	p = lst;
	while(p != NULL)
	{
		f(p->content);
		p = p->next;
	}
}
