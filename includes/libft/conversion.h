/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:55:00 by spopieul          #+#    #+#             */
/*   Updated: 2018/02/10 15:36:13 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONVERSION_H
# define LIBFT_CONVERSION_H

# define FT_CHAR_BASE "0123456789ABCDEF"

int			ft_atoi(const char *str);
long long	ft_atoll(const char *str, int base);
char		*ft_itoa(int n);
char		*ft_lltoa(long long n, int base);
char 		*ft_ulltoa(unsigned long long n, int base);
char		*ft_wctoa(wchar_t wc);
char		*ft_wstrtoa(const wchar_t *wstr);
char		*ft_wstrtoa_n(const wchar_t *wstr, size_t n);

#endif
