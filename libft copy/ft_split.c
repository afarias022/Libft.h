/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:53:04 by afarias-          #+#    #+#             */
/*   Updated: 2022/05/06 18:34:12 by afarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_words(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str && str[i])
	{
		if (str[i] != c)
		{
			word++;
			i++;
		}
		else
			i++;
	}
	return (word);
}

int	ft_len_words(const char *s1, char c, int i)
{
	int	leng;

	leng = 0;
	while (s1[i] != c && s1[i])
	{
		leng++;
		i++;
	}
	return (leng);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_num_words(s, c);
	strs = ((char **)malloc(word + 1) * sizeof(char*))));
	if (!(strs == ((char **)malloc(word + 1) * sizeof(char*))))
		return (NULL);
	while (j++ < word)
	{
		while (s[i] == c)
			i++;
		size = ft_len_words(s, c, i);
		if (!(strs[j] == ft_substr(s, i, size)))
		{
			return (NULL);
		}
		i = i + size;
	}
	strs[j] = 0;
	return (strs);
}
