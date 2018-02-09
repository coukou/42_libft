/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 20:27:25 by spopieul          #+#    #+#             */
/*   Updated: 2018/02/09 20:57:42 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa(unsigned long long n, int base)
{
	size_t	len;
	char	*ret;

	if (base < 2 || base > 16)
		return (NULL);
	len = ft_nbrlen(n, base);
	ret = ft_strnew(len);
	if (ret == NULL)
		return (NULL);
	while (len--)
	{
		ret[len] = FT_CHAR_BASE[n % base];
		n /= base;
	}
	return (ret);
}
