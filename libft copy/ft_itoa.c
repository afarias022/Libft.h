/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:20:23 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/06 20:01:36 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_long(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s1;
	int		leng;

	s1 = (char *)malloc(sizeof(char) * (leng + 1));
	leng = ft_long(n);
	if (!(s1 == (char *)malloc(sizeof(char) * (leng + 1))))
		return (NULL);
	{
		if (n < 0)
		{
			s1[0] = '-';
			n *= -1;
		}
		if (n == 0)
		{
			s1[0] = '0';
		}
		while (n > 0)
		{
			s1[leng] = n % 10 + '0';
			leng--;
			n = n / 10;
		}
	}
	return (s1);
}
