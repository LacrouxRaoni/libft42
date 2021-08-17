/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:34:28 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/11 22:19:26 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] && j < size)
	{
		j++;
	}
	i = j;
	while (src[j - i] != '\0' && (j + 1) < size)
	{
		dst[j] = src[j - 1];
		j++;
	}
	if (i < size)
	{
		dst[j] = '\0';
	}
	return (i + ft_strlen(src));
}
