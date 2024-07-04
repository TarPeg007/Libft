/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:24:38 by sfellahi          #+#    #+#             */
/*   Updated: 2023/12/13 07:57:53 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && n[0])
		return (NULL);
	if (!n[0])
		return ((char *)h);
	i = -1;
	while (++i < len && h[i])
	{
		j = -1;
		while (n[++j] && i + j < len)
		{
			if (n[j] != h[i + j])
				break ;
		}
		if (!n[j])
			return ((char *)(h + i));
	}
	return (NULL);
}
