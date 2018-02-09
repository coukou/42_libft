/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 06:32:21 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/14 17:05:23 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char *dup;

	dup = ft_strnew(len);
	if (dup == NULL)
		return (NULL);
	while (len--)
		dup[len] = str[len];
	return (dup);
}
