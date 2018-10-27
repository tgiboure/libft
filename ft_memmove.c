/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:07:40 by togibour          #+#    #+#             */
/*   Updated: 2017/11/09 15:27:26 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*buf;

	buf = (void *)malloc(len * sizeof(void *));
	if (!buf)
		return (NULL);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}
