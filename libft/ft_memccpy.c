/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:52:13 by mhogg             #+#    #+#             */
/*   Updated: 2021/08/01 19:52:14 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = src;
	str2 = dst;
	i = 0;
	while (i < n)
	{
		str2[i] = str1[i];
		if (str2[i] == (unsigned char)c)
			return (&str2[i + 1]);
		i++;
	}
	return (NULL);
}
