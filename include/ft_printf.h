/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:29:49 by fkimijim          #+#    #+#             */
/*   Updated: 2024/05/02 20:14:42 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

int		print_c(char c, int count);
int		print_s(char *s, int count);
int		print_p(void *p, int count);
int		print_d(int n, int count);
int		print_i(int n, int count);
int		print_u(long int n, int count);
int		print_x(unsigned int n, int count);
int		print_large_x(unsigned int n, int count);
int		print_percent(int count);
int		ft_printf(const char *format, ...);
char	*make_list_small(void);
int		hex_recursive(unsigned long n, char *num_list, int count);
int		recursive_putnbr(long int n, int count);

#endif
