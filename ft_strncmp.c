#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	r;

	r = 0;
	while (n > 1 && str1[r] == str2[r])
	{
		r++;
		n--;
	}
	return (str1[r] - str2[r]);
}
