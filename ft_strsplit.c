/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:45:16 by togibour          #+#    #+#             */
/*   Updated: 2017/11/10 14:18:27 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwords(char *s, char c)
{
	int		i;
	int		is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static int	ft_strlenm(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nb_words = ft_nbwords((char *)s, c);
	tab = (char **)malloc((nb_words + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_strlenm((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_strlenm((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
