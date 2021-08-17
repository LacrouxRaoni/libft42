/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:09:09 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/11 22:10:06 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*newdest;
	unsigned char	*newsrc;

	if (dest == src || n == 0)
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
