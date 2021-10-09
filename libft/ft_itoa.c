/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:51:42 by mhogg             #+#    #+#             */
/*   Updated: 2021/08/01 19:51:43 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;
	int	a;

	a = n;
	len = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		a = -a;
	while (a > 0)
	{
		a = a / 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		a;

	if (n == (-2147483648))
		return (ft_strdup("-2147483648"));
	a = n;
	len = ft_numlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		n = -n;
	while (len)
	{
		len--;
		str[len] = n % 10 + 48;
		n = n / 10;
	}
	if (a < 0)
		str[0] = '-';
	return (str);
}
