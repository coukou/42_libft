/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 14:26:35 by spopieul          #+#    #+#             */
/*   Updated: 2018/02/09 21:04:50 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_base(const char *str, int base)
{
	int res;
	int n;
	int cvalue;

	if (base < 2 || base > 16)
		return (0);
	res = 0;
	n = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		n = -n;
	if (*str == '-' || *str == '+')
		str++;
	while ((cvalue = ft_strfind(FT_CHAR_BASE, ft_toupper(*str))) > -1 && cvalue < base)
	{
		res *= base;
		res += cvalue;
		str++;
	}
	return ((base == 10) ? res * n : res);
}
