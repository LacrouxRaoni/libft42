/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:03:31 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/11 22:06:07 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_itoa(char *str,
						size_t n_size,
						unsigned int n,
						unsigned int n_negative)
{
	str[n_size] = '\0';
	while (n_size--)
	{
		str[n_size] = (n / 10) + 48;
		n /= 10;
	}
	if (n_negative)
	{
		str[0] = '-';
	}
	return (str);
}

size_t	ft_nlen(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		len++;
	}
	num /= 10;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	n_size;
	size_t	n_negative;

	n_size = ft_nlen(n);
	n_negative = 0;
	if (n < 0)
	{
		n_negative = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	return (convert_itoa(str, n_size, (unsigned int)n, n_negative));
}
