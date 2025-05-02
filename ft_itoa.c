/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haokumur <haokumur@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:23:05 by haokumur          #+#    #+#             */
/*   Updated: 2025/05/02 15:35:58 by haokumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	cnt;

	cnt = 0;
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		neg;

	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	neg = (num < 0);
	if (neg)
		num = -num;
	len = count_digits(num) + neg;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
