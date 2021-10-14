/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:29:55 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/14 01:24:32 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// utils
int		ft_putchar(int c);
int		ft_putprct(void);
int		ft_putstr(const char *s);
int		ft_strlen(char *s);
// integer
int		ft_putnbr(int n);
int		count_num_len(int n);
// unsigned 
int		get_unb_len(unsigned int nb);
char	*ft_uitoa(unsigned int nb);
int		ft_unsigned(unsigned int n);
// hex
int		hex_length(unsigned int num);
int		dec_to_hex(unsigned int num, char format);
// pointer
int		ptr_length(unsigned long num);
int		ft_putptr(unsigned long num);
// printf  
int		ft_format(const char format, va_list args);
int		ft_printf(const char *str, ...);
#endif
