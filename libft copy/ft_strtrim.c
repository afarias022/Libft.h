/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:12:10 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/06 19:48:33 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	char	*result;

	size = 0;
	result = ft_substr((char *)s1, 0, size + 1);
	while (*s1 && ft_strchr(set, *s1))
	s1++;
	while (size && ft_strchr(set, s1[size]))
	size--;
	return (result);
}
