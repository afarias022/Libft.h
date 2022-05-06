/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:23:17 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 18:14:01 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), \
								void (*del)(void *))
{
	t_list	*fir;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	fir = NULL;
	new = ft_lstnew(f(lst->content));
	while (lst)
	{
		if (!new)
		{
			while (fir)
			{
				new = fir->next;
				(*del)(fir->content);
				free(fir);
				fir = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&fir, new);
		lst = lst->next;
	}
	return (fir);
}
