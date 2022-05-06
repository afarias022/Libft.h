/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:44:39 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 18:33:39 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while ((a[i] || b[i]) && i < n)
	{
		if (a[i] > b[i])
			return (a[i] - b[i]);
		if (a[i] < b[i])
			return (a[i] + b[i]);
		i++;
	}
	return (0);
}
