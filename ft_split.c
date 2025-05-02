/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:52:41 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/02 14:31:58 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*get_word(const char **sp, char c)
{
	const char	*start;
	size_t		len;
	char		*word;

	start = *sp;
	while (*start == c)
		start++;
	len = word_len(start, c);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	*sp = start + len;
	return (word);
}

static char	**free_all(char **arr, size_t used)
{
	size_t	i;

	i = 0;
	while (i < used)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		res[i] = get_word(&s, c);
		if (!res[i])
			return (free_all(res, i));
		i++;
	}
	res[i] = NULL;
	return (res);
}
