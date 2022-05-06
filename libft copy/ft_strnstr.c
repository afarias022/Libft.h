/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:05:31 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 18:45:53 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	length;
	char	*stack;

	i = 0;
	c = 0;
	length = ft_strlen(needle);
	stack = (char *) haystack;
	if (length == 0 || stack == needle)
		return (stack);
	while (stack[i] && i < len)
	{
		while (i + c < length && stack[i + c] == needle[c])
		{
				c++;
		}
		if (c == length)
			return (stack + i);
		i++;
	}
	return (0);
}
