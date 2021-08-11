#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	
	if (c  > 127)
	{
		c %= 256;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)s);
		}
	i++;
	}
	if (*s == c)
	{
		return ((char *)s);		
	}
	return (NULL);
}
