/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atobin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:21:49 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:21:56 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atobin(int c)
{
	char	*ret;
	int		index;
	int		res;

	index = 8;
	res = 0;
	if (c)
	{
		if (!(ret = (char *)malloc(sizeof(char) * 8)))
			return (ERROR);
		while (--index >= 0)
		{
			ret[index] = c % 2 + '0';
			c = c / 2;
		}
		res = ft_atoi(ret);
		free(ret);
		return (res);
	}
	return (ERROR);
}
