/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_large_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:30:46 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 19:00:43 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*make_list_large(void)
{
	static char	list[17];
	int			i;

	i = 0;
	while (i < 17)
	{
		if (i < 10)
			list[i] = i + '0';
		else
			list[i] = 'A' + (i - 10);
		i++;
	}
	list[16] = '\0';
	return (list);
}

int	print_large_x(unsigned int n, int count)
{
	char		*num_list;
	long int	num;

	num_list = make_list_large();
	if (n < 0)
		num = UINT_MAX - n + 1;
	else
		num = n;
	count = hex_recursive(num, num_list, count);
	return (count);
}
