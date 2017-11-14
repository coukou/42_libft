/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:11:37 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/14 17:22:24 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = ft_strlen((char*)str);
	while (i > 0 && str[i] != c)
		i--;
	return (i == 0 ? NULL : (char*)&str[i]);
}
