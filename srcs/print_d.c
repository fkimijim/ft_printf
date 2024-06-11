/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:30:22 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 19:05:00 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int n, int count)
{
	char		c;
	long int	num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		count++;
	}
	if (num > 9)
		count = recursive_putnbr(num, count);
	else
	{
		c = num + '0';
		write(1, &c, 1);
		count++;
	}
	return (count);
}
