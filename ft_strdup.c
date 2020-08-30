/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:39:18 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:39:20 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	char	*copy;

	index = -1;
	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (copy != NULL)
	{
		while (s1[++index])
			copy[index] = s1[index];
		copy[index] = '\0';
	}
	return (copy);
}
