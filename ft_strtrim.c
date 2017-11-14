/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:29:07 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/14 17:23:31 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isblank(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char			*ft_strtrim(const char *s)
{
	size_t len;

	if (s == NULL)
		return (NULL);
	while (isblank(*s) && *s)
		s++;
	if (*s == '\0')
		return ((char*)s);
	len = ft_strlen(s);
	while (isblank(s[--len]))
		;
	return (ft_strsub(s, 0, len + 1));
}
