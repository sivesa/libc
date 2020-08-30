/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:30:38 by ssandla           #+#    #+#             */
/*   Updated: 2017/07/16 12:30:42 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *haystack, int needle)
{
	char	*end;

	end = ft_strchr(haystack, '\0');
	while (haystack < end && *end != needle)
		end--;
	if (*end == needle)
		return ((char*)end);
	return (NULL);
}
