/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:18:56 by togibour          #+#    #+#             */
/*   Updated: 2017/11/08 23:45:33 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int nbs;

	nbs = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbs = nb * -1;
	}
	if (nbs >= 10)
	{
		ft_putnbr(nbs / 10);
		ft_putnbr(nbs % 10);
	}
	else
	{
		ft_putchar(nbs + '0');
	}
}
