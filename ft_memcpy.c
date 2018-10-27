/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:55:50 by togibour          #+#    #+#             */
/*   Updated: 2017/11/10 15:15:21 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = (char *)dst;
	psrc = (const char *)src;
	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dst);
}
