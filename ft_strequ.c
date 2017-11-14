/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:45:16 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/14 17:20:59 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const unsigned char *s1, const unsigned char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	return (ft_strcmp(s1, s2) == 0);
}
