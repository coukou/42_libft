/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:55:08 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/09 20:20:47 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *tofind)
{
	size_t i;

	if (tofind[0] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (tofind[i] && *(str + i) == tofind[i])
			i++;
		if (tofind[i] == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
