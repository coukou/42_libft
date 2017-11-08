/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:42:55 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/08 19:44:00 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <stdlib.h>

void	*ft_memset(void *b, int c, int len);
void	ft_bzero(void *s, int len);
void	*ft_memcpy(void *dst, void *src, int n);
void	*ft_memove(void *dst, void *src, int len);
void	*ft_memchr(void *s, int c, int n);
int		ft_memcmp(void *s1, void *s2, int n);

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, int n);
int		ft_strlcat(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strrchar(char *s, int c);
char	*ft_strstr(char *src, char *find);
char	*ft_strnstr(char *src, char *find, int len);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);

int		ft_atoi(char *str);

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);

char	ft_toupper(char c);
char	ft_tolower(char c);

#endif
