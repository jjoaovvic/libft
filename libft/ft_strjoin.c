#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	full_size;

	full_size = ft_strlen(s1) + ft_strlen(s2);
	new_str = ft_calloc(full_size + 1, sizeof(char));
	ft_strlcpy(new_str, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, full_size + 1);
	return (new_str);
}
