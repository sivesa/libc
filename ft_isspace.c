/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:24:10 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:24:13 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isspace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t' || c == '\r'
				|| c == '\f' || c == '\v') ? TRUE : FALSE);
}