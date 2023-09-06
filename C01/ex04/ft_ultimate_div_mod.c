/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:55:44 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/06 12:02:25 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;
	int	tmd;

	tmp = *a / *b;
	tmd = *a % *b;
	*a = tmp;
	*b = tmd;
}
