/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:36:27 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/15 00:05:08 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t i;

	i = (n < 0) ? 2 : 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	unsigned int	un;
	size_t			len;
	char			*ret;

	un = ft_abs(n);
	len = intlen(n);
	ret = ft_strnew(len);
	if (ret == NULL)
		return (NULL);
	while (len--)
	{
		ret[len] = '0' + un % 10;
		un /= 10;
	}
	if (n < 0)
		ret[0] = '-';
	return (ret);
}
