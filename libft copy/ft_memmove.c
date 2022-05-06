/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:12:09 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 19:54:07 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned int *) dst)[i] = ((unsigned int *) src)[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char	*y;
	unsigned char	*e;
	size_t			i;

	i = len;
	y = (unsigned char *) dst;
	e = (unsigned char *) src;
	if (y < e && (y || e))
		ft_memcpy(dst, src, len);
	else
	{
		while (i > 0)
		{
			y[i - 1] = e[i - 1];
			i--;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char	dst[50] = "bandingPro";
	char	src[50] = "Dingproban";

	ft_memmove(dst, src, 3);
	printf("%s", dst);
} */
