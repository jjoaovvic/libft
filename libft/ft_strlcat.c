#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;

	i = 0;
	j = 0;
	dst_size = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (i + 1 < size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	return (dst_size + ft_strlen(src));
}
