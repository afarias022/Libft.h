/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:26:21 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 18:35:48 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	*c;

	b = (unsigned char *)s1;
	c = (unsigned char *)s2;
	i = 0;
	while ((b[i] || c[i]) && i < n)
	{
		if (b[i] < c[i])
			return (-1);
		if (b[i] > c[i])
			return (1);
			i++;
	}
	return (0);
}
