/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:21:40 by togibour          #+#    #+#             */
/*   Updated: 2017/11/09 19:16:22 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t j;
	size_t c;

	c = 0;
	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && c < nb)
	{
		dest[i + j] = src[j];
		j++;
		c++;
	}
	dest[i + j] = '\0';
	return (dest);
}
