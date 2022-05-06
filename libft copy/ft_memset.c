/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:56:02 by afarias-          #+#    #+#             */
/*   Updated: 2022/04/04 18:55:59 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		*(ptr++) = (unsigned char) c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '6', 5);
	puts(str);
	return (0);
} */