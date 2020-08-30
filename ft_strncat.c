/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:42:03 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:42:06 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t		s1_index;
	size_t		s2_index;

	s1_index = ft_strlen(s1);
	s2_index = -1;
	while (s2[++s2_index] && s2_index < n)
	{
		s1[s1_index] = s2[s2_index];
		s1_index++;
	}
	s1[s1_index] = '\0';
	return (s1);
}
