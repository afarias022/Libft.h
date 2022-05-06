/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:03:17 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 19:53:28 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	z;
	unsigned int	count;

	count = 0;
	z = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize > z)
	{
		while (src[z] != '\0' && z < (dstsize - 1))
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = '\0';
	}
	return (count);
}

/* int	main(void)
{
	char	dest[] = "hello world";
	char	src[] = "its me";

	printf("%s\n", dest);
	ft_strlcpy(dest, src, 3);
	printf("%s\n", dest);
	strlcpy(dest, src, 3);
	printf("%s", dest);
}
 */