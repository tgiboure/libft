/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:07:25 by togibour          #+#    #+#             */
/*   Updated: 2017/11/09 18:39:08 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}
