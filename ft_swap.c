/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:45:43 by ssandla           #+#    #+#             */
/*   Updated: 2017/09/02 13:45:45 by ssandla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int a, int b)
{
	int		tmp;

	tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}