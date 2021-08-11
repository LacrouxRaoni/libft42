#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *newdest;
	unsigned char *newsrc;

	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		newdest = (unsigned char *)dest;
		newsrc = (unsigned char *)src;
		while (n--)
		{
			*newdest++ = *newsrc++;
		}
	}
	else
	{
		newdest = (unsigned char *) dest + (n - 1);
		newsrc = (unsigned char *) src + (n - 1);
		while(n--)
		{
			*newdest-- = *newsrc--;
		}
	}
	return (dest);
}