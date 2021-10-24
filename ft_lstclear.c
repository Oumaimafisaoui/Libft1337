#include "libft.h"

void	ft_lstclear(t_list **lst, void	(*del)(void*))
{
	t_list	*help;
	t_list	*n;

	if(*lst == NULL)
		return ;
	n = *lst;
	while(n != NULL)
	{
		help = n->next;
		ft_lstdelone(n, del);
		n = help;
	}
	*lst = NULL;
}

