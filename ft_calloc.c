#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	size_t	*pos;
	 int	fill_bite;

	tot_size = nmemb * size;
	fill_bite = 0;
	pos = malloc(tot_size);
	if (!pos || (tot_size > __INT_MAX__))
	{
		return (NULL);
	}
	ft_memset (pos, fill_bite, tot_size);
	return ((void *) pos);
}
