#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*cpy;

	temp = *lst;
	while (temp)
	{
		cpy = temp->next;
		del(temp->content);
		free(temp);
		temp = cpy;
	}
	*lst = NULL;
}
