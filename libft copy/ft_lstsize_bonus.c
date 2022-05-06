/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:47:58 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/01 17:55:10 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		leng;

	new = lst;
	leng = 0;
	while (new)
	{
		new = new->next;
		leng++;
	}
	if (new->next == NULL)
	leng++;
	return (leng);
}
