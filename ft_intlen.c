/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:22:42 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:22:46 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int	len;
	int	div;

	len = 0;
	div = 1;
	if (n == (-2147483648))
	{
		n = 147483648;
		len = len + 2;
	}
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while ((n / div) != 0)
	{
		div = div * 10;
		len++;
	}
	return (len);
}
