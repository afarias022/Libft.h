/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:29:25 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/06 18:41:34 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sub;
	int		i;

	sub = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(sub == (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		sub[i] = f(i, s[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
