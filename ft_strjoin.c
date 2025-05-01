/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:13:55 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/01 19:08:28 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	size;
// 	char	*res;

// 	size = strlen(s1) + strlen(s2) + 1;
// 	res = malloc(size);
// 	if (!res)
// 		return (NULL);
// 	ft_strlcpy(res, s1, size);
// 	ft_strlcat(res, s2, size);
// 	return (res);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*p;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = malloc(len1 + len2 + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, len1);
	ft_memcpy(p + len1, s2, len2);
	p[len1 + len2] = '\0';
	return (p);
}
