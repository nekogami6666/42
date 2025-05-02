/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:02:42 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/02 18:04:13 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	dst_len;
// 	size_t	src_len;

// 	dst_len = ft_strnlen(dst, size);
// 	src_len = ft_strlen(src);
// 	dst += dst_len;
// 	size -= dst_len;
// 	while (1 < size && *src)
// 		*dst++ = (size--, *src++);
// 	if (size)
// 		*dst = '\0';
// 	return (dst_len + src_len);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	slen = 0;
	while (src[slen])
		slen++;
	if (dlen >= size)
		return (size + slen);
	i = 0;
	while (dlen + i + 1 < size && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
