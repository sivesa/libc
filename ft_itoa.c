/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:56:02 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:24:23 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_absl(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

long int	ft_len(long int nbr)
{
	long int	len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	char		*c;
	long int	len;
	int			sign;

	len = ft_len(nbr);
	sign = (nbr < 0) ? -1 : 1;
	if (!(c = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_absl(nbr % 10);
		nbr = ft_absl(nbr / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
