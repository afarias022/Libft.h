/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:33:43 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/03 19:48:41 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*dest;

	i = 0;
	dest = s;
	while (i != 0 && i < n)
	{
		dest[i] = 0;
		i++;
		dest++;
	}
}

/* int	main(void)
{
	char	str[50];

	strcpy(str, "string de prueba");
	puts(str);
	ft_bzero(str, 3);
	puts(str);
	return (0);
} */