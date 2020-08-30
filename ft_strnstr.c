/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:43:02 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:43:04 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	char	c;
	char	stmp;
	size_t	len;
	int		t;

	t = 0;
	if ((c = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (!t || ft_strncmp(s1, s2, len) != 0)
		{
			t = 1;
			if ((stmp = *s1++) == '\0' || n-- < 1)
				return (NULL);
			while (stmp != c)
			{
				if ((stmp = *s1++) == '\0' || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
		}
		s1--;
	}
	return ((char *)s1);
}
