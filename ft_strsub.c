/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:45:21 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:45:23 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	index;

	index = 0;
	if (s == NULL)
		return (NULL);
	if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (index < len)
	{
		ret[index] = s[start];
		start++;
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
