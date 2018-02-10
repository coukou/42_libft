/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:39:37 by spopieul          #+#    #+#             */
/*   Updated: 2018/02/10 14:09:10 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <wchar.h>
# include <stdlib.h>

size_t	ft_wstrlen(const wchar_t *wstr)
{
	int i;

	i = -1;
	while (wstr[++i])
		;
	return (i);
}
