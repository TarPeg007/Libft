/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 03:43:49 by sfellahi          #+#    #+#             */
/*   Updated: 2023/12/12 21:05:19 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newone;

	newone = (t_list *)malloc(sizeof(t_list));
	if (!newone)
		return (NULL);
	newone->content = content;
	newone->next = NULL;
	return (newone);
}
