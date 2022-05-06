/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:21:57 by afarias-          #+#    #+#             */
/*   Updated: 2022/03/30 16:56:51 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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

/* int	main(void)
{
	char	src[20] = "WASA";
	char	dst[20] = "adasdasdasdasdasd";

	ft_memcpy(dst, src, 3);
	printf("%s", dst);
} */