/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:37:51 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/11 16:13:47 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;

	if (s == NULL)
		return (NULL);
	i = -1;
	n = ft_strnew(ft_strlen(s));
	if (n == NULL)
		return (n);
	while (s[++i])
		n[i] = f(i, s[i]);
	return (n);
}
