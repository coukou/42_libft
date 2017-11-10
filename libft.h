/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:42:55 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/09 23:39:46 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memalloc(size_t size);

size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
// int		ft_strlcat(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strrchar(char *s, int c);
char	*ft_strstr(char *src, char *find);
char	*ft_strnstr(char *src, char *find, size_t len);
int		ft_strcmp(unsigned char *s1, unsigned char *s2);
int		ft_strncmp(unsigned char *s1, unsigned char *s2, size_t n);

int		ft_atoi(char *str);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
