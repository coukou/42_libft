/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:36:56 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/09 20:25:04 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *tofind, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (tofind[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (tofind[j] && str[i + j] == tofind[j])
			j++;
		if (tofind[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
