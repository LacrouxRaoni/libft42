#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *newdest;
	unsigned char *newsrc;
	
	if(dest == src || n == 0)
	{
		return (dest);
	}
	newdest = (unsigned char *) dest;
	newsrc = (unsigned char *) src;
	if (n--)
	{
		*newdest++ = *newsrc++;
	}
	return (dest);
}