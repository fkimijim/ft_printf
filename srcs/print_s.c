/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:16:29 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:21:33 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *s, int count)
{
	if (!s)
	{
		write(1, "(null)", 6);
		count += 6;
		return (count);
	}
	while (*s)
	{
		write(1, s, 1);
		count++;
		s++;
	}
	return (count);
}
