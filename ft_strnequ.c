/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:49:03 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/13 00:42:55 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(unsigned char *s1, unsigned char *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	return (ft_strncmp(s1, s2, n) == 0);
}
