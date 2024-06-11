/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:30:06 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:26:57 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	divided_case(const char *format, va_list ap, int count)
{
	if (*format == 'c')
		count = print_c((char)va_arg(ap, int), count);
	else if (*format == 's')
		count = print_s(va_arg(ap, char *), count);
	else if (*format == 'p')
		count = print_p(va_arg(ap, void *), count);
	else if (*format == 'd')
		count = print_d(va_arg(ap, int), count);
	else if (*format == 'i')
		count = print_d(va_arg(ap, int), count);
	else if (*format == 'u')
		count = print_u(va_arg(ap, unsigned int), count);
	else if (*format == 'x')
		count = print_x(va_arg(ap, unsigned int), count);
	else if (*format == 'X')
		count = print_large_x(va_arg(ap, unsigned int), count);
	else if (*format == '%')
		count = print_percent(count);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = divided_case(format, ap, count);
			format++;
		}
		else
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}
	va_end(ap);
	return (count);
}
