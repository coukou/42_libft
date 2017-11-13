/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 01:05:09 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/11 16:15:55 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char *ret;

	if (s == NULL)
		return (NULL);
	ret = ft_strnew(len);
	if (ret == NULL)
		return (ret);
	ft_strncpy(ret, &s[start], len);
	return (ret);
}
