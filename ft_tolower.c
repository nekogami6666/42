/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:57:56 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/01 19:06:05 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_tolower(int c)
// {
// 	return (c | (!!ft_isalpha(c) << 5));
// 	return (c & ~(!!ft_isalpha(c) << 5));
// 	if (c >= 'A' && c <= 'Z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	else
		return (c);
}
