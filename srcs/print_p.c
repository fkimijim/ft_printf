/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:22:15 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:10:59 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*make_list_small(void)
{
	static char	list[17];
	int			i;

	i = 0;
	while (i < 17)
	{
		if (i < 10)
			list[i] = '0' + i;
		else
			list[i] = 'a' + (i - 10);
		i++;
	}
	list[16] = '\0';
	return (list);
}

int	print_p(void *p, int count)
{
	char			*num_list;
	unsigned long	n;

	num_list = make_list_small();
	n = (unsigned long)p;
	write(1, "0x", 2);
	count += 2;
	count = hex_recursive(n, num_list, count);
	return (count);
}
