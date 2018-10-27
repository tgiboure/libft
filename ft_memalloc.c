/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:33:39 by togibour          #+#    #+#             */
/*   Updated: 2017/11/13 14:49:26 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = malloc(size);
	if (!mem)
		return (NULL);
	while (i < size)
	{
		mem[i] = '\0';
		i++;
	}
	return ((void *)mem);
}
