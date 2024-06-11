/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:31:40 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:24:01 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	recursive_putnbr(long int n, int count)
{
	char	c;

	if (n > 9)
		count = recursive_putnbr(n / 10, count);
	c = n % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_u(long int n, int count)
{
	char		c;
	long int	num;

	if (n < 0)
		num = UINT_MAX + n + 1;
	else
		num = n;
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
