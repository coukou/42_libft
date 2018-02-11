/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 20:27:25 by spopieul          #+#    #+#             */
/*   Updated: 2018/02/11 12:24:42 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(long long n, int base)
{
	char *ret;

	ret = ft_ulltoa(FT_ABS(n), base);
	if (ret == NULL)
		return (NULL);
	if (n < 0 && base == 10)
		return (ft_strjoin_free(ft_strdup("-"), ret));
	return (ret);
}