/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:01:31 by togibour          #+#    #+#             */
/*   Updated: 2017/11/09 14:06:05 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (char)c)
		str = (char *)s;
	return (str);
}
