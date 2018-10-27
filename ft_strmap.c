/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:14:43 by togibour          #+#    #+#             */
/*   Updated: 2017/11/13 17:14:44 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	res = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
