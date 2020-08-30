/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:32:10 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:32:13 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;
	char	*dst_cpy;
	char	*src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	index = 0;
	if (src_cpy < dst_cpy)
	{
		while (++index <= len)
			dst_cpy[len - index] = src_cpy[len - index];
	}
	else
	{
		while (index < len)
		{
			dst_cpy[index] = src_cpy[index];
			index++;
		}
	}
	return (dst);
}
