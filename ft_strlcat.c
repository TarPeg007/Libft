/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:51:23 by sfellahi          #+#    #+#             */
/*   Updated: 2023/12/13 08:29:35 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dest && size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	len = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && len < size - 1)
		dest[len++] = src[i++];
	dest[len] = 0;
	return (dest_len + src_len);
}
