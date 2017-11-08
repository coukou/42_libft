/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:42:52 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/08 19:47:39 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char *cpy;
	int size;

	size = ft_strlen(str);
	cpy = (char*)malloc(sizeof(*cpy) * size);
	if (cpy)
		cpy = ft_strncpy(cpy, str, size);
	cpy[size + 1] = '\0';
	return cpy;
}
