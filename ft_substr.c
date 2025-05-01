/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:31 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/01 18:50:25 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strnlen(const char *s, size_t maxlen)
// {
// 	const char *const h = s;
// 	while (maxlen && *s)
// 		(void)(maxlen--, s++);
// 	return (s - h);
// }

// char	*ft_strndup(const char *s, size_t n)
// {
// 	char	*res;
// 	size_t	size;

// 	size = ft_strnlen(s, n) + 1;
// 	res = malloc(size);
// 	if (res)
// 		return (NULL);
// 	ft_strlcpy(res, s, size);
// 	return (res);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	return (ft_strndup(s + ft_strnlen(s, start), len));
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	copy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		copy_len = s_len - start;
	else
		copy_len = len;
	substr = malloc(copy_len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, copy_len);
	substr[copy_len] = '\0';
	return (substr);
}
