/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_small_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:31:26 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:14:36 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_recursive(unsigned long n, char *num_list, int count)
{
	if (n / 16 != 0)
		count = hex_recursive(n / 16, num_list, count);
	write(1, &num_list[n % 16], 1);
	count++;
	return (count);
}

int	print_x(unsigned int n, int count)
{
	char		*num_list;
	long int	num;

	num_list = make_list_small();
	if (n < 0)
		num = UINT_MAX - n + 1;
	else
		num = n;
	count = hex_recursive(num, num_list, count);
	return (count);
}
