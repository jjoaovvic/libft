#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		size;
	int		i;

	size = ft_strlen(src);
	i = 0;
	copy = (char *)malloc ((size + 1) * sizeof(char));
	while (i <= size)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
