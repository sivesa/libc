/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:25:26 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:36:38 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *haystack, int needle)
{
	while (*haystack && *haystack != needle)
		haystack++;
	if (*haystack == needle)
		return ((char*)haystack);
	return (NULL);
}
