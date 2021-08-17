/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:24:21 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/16 23:43:06 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return ((int)n);
	}
	while (i < n)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
		{
			return (0);
		}
		if (str1[i] != str2[i])
		{
			return ((int)(str1[i] - str2[i]));
			i++;
		}
	}
	return (0);
}
