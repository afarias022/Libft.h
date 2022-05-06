/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:04:15 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/06 18:56:26 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;

	mem = (char *)malloc(sizeof(mem) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (mem && s1 && s2)
	{
		while (*s1)
		{
			*mem = *s1;
			mem++;
			s1++;
		}
		while (*s2)
		{
			*mem = *s2;
			mem++;
			s2++;
			*mem = '\0';
		}
	}
	else
		return (NULL);
	return (mem);
}
