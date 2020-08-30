/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:30:34 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:30:37 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int stopper, size_t len)
{
	size_t			i;
	char			curr;

	i = 0;
	while (i < len)
	{
		curr = ((char*)source)[i];
		((char*)dest)[i] = curr;
		i++;
		if (curr == stopper)
			return ((char*)dest + i);
	}
	return (NULL);
}
