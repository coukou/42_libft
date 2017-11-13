/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spopieul <spopieul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:18:10 by spopieul          #+#    #+#             */
/*   Updated: 2017/11/13 07:22:37 by spopieul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		next_word_len(char *s, char c)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static int				count_words(char *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			words++;
			s += ft_strlenc(s, c);
		}
	}
	return (words);
}

char					**ft_strsplit(char *s, char c)
{
	size_t	words;
	int		i;
	char	**ret;
	size_t	len;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	ret = (char**)ft_memalloc(sizeof(char**) * words + 1);
	if (ret == NULL)
		return (NULL);
	ret[words] = 0;
	i = 0;
	while (words--)
	{
		while (*s == c)
			s++;
		len = next_word_len(s, c);
		ret[i++] = ft_strndup(s, len);
		s += len;
	}
	return (ret);
}
