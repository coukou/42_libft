/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:18:07 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/11 16:13:16 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
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
		n[i] = f(s[i]);
	return (n);
}
