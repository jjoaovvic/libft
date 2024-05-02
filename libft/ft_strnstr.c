#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!big || !little)
		return (NULL);
	if (little[j] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		k = i;
		while (big[k] == little[j] && k < len)
		{
			j++;
			k++;
			if (little[j] == '\0')
				return ((char *)big + k - j);
		}			
		j = 0;
		i++;
	}
	return (NULL);
}
