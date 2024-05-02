#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	size;
	size_t	i;
	char	*s_cpy;

	size = ft_strlen(s);
	i = 0;
	s_cpy = s;
	while (i < size)
	{
		f(i, s_cpy);
		s_cpy++;
		i++;
	}
}
