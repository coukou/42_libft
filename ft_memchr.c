/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:04:22 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/11 15:38:17 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*sptr;

	i = -1;
	sptr = (unsigned char*)s;
	while (++i < len)
		if (sptr[i] == (unsigned char)c)
			return (&sptr[i]);
	return (NULL);
}
