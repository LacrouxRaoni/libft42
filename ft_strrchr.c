#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	if (c > 127)
	{
		c %= 256;
	}
	i = ft_strlen(s);
	while (s[i] >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}
