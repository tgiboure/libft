/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:16:53 by togibour          #+#    #+#             */
/*   Updated: 2017/11/13 17:13:19 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		t;
	char	*s;
	int		i;

	t = 0;
	i = 0;
	while (src[t] != '\0')
		t++;
	s = (char*)malloc(sizeof(*s) * (t + 1));
	if (!s)
		return (NULL);
	while (i <= t)
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
