#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*p;

	p = lst;
	counter = 1;
	while (p != NULL)
	{
		++counter;
		p = p->next;
	}
	return (counter);
}
