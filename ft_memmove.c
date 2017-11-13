/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:42:12 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/13 06:13:31 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	void *ret;

	ret = dst;
	if (dst < src)
		while ((size_t)(dst - ret) < len)
			*((unsigned char*)dst++) = *((unsigned char*)src++);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
