/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:37:36 by togibour          #+#    #+#             */
/*   Updated: 2017/11/08 21:54:55 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	res = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
