/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:40:45 by plandolf          #+#    #+#             */
/*   Updated: 2023/06/26 13:53:11 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

// ft_printf.c
int		ft_printf(const char *str, ...);
int		ft_print_formats(va_list args, const char format);
// ft_printf_utils.c
size_t	ft_strlen(const char *s);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_nbr(long int i);
int		ft_number_lenght(long int i);
// ft_printf_utils_2.c
int		ft_hex_lenght(unsigned long int i);
void	ft_put_ptr(unsigned long int n);
int		ft_print_ptr(unsigned long int n);
int		ft_print_unsigned(unsigned int i);
// ft_printf_utils_3.c
void	ft_put_hex_lower(unsigned long int n);
int		ft_print_hex_lower(unsigned long int n);
void	ft_put_hex_upper(unsigned long int n);
int		ft_print_hex_upper(unsigned long int n);
// ft_itoa.c
char	*ft_itoa_printf(long int n);
#endif
