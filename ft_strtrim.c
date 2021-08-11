/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:21:25 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/10 22:34:02 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char *new_s1;
	unsigned char *new_set;
	unsigned char *s3;
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	s3 = (unsigned char *)malloc(len + 1);
	if (!set)
	{
		return (NULL);
	}
	new_s1 = s1;
	new_set = set;
	i = 0;
	while (new_s1[i] != '\0')
	{
		if (new_s1[i] != set)
		{
			s3[i] = new_s1[i];
		}
	}
	return (s3);
}