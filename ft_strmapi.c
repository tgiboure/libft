/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togibour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:29:42 by togibour          #+#    #+#             */
/*   Updated: 2017/11/08 21:09:58 by togibour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	char		*res;
	int			i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
