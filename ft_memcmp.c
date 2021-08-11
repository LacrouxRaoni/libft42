#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *new_s1;
	unsigned char *new_s2;
	size_t i;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (new_s1[i] != new_s2[i])
		{
			return ((int)(new_s1[i] - new_s2[i]));
		}
		if (n == 0)
		{
			return ((int)n);
		}
		i++;
	}
	return (0);
	
}