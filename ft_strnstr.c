/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:24:59 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/11 22:28:24 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_little;

	i = 0;
	size_little = ft_strlen(little);
	if (!(*little))
	{
		return ((char *)big);
	}
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, size_little) == 0)
			&& (i + size_little < len))
		{
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
