#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = ft_calloc(1, sizeof(t_list));
	if (new_list != NULL)
	{
		new_list->content = content;
		new_list->next = NULL;
		return (new_list);
	}
	else
		return (NULL);
}
