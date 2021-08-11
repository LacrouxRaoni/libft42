#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t size_little;

	i = 0;
	size_little = ft_strlen(little);
	if (!(*little))
	{
		return ((char *)big);
	}
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, size_little) == 0) && (i + size_little < len))
		{
			return ((char*)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
