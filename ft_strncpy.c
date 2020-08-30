/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:42:21 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:42:23 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;
	size_t	length;

	index = -1;
	length = ft_strlen(src);
	while (++index < n)
	{
		if (index > length)
			dst[index] = '\0';
		else
			dst[index] = src[index];
	}
	return (dst);
}
