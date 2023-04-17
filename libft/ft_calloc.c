#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pointer;

	if (((nitems * size) / size != nitems && size != 0))
		return (NULL);
	pointer = (void *)malloc(nitems * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nitems * size);
	return (pointer);
}
