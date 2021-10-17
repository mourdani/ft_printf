/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:29:55 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/17 14:35:39 by mourdani         ###   ########.fr       */
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
int		ft_putnum(int n);
int		get_num_len(int n);
// unsigned 
//char	*ft_uitoa(unsigned int n);
int		ft_putunum(unsigned int n);
void		ft_putunbr(unsigned int n);
int		get_unum_len(unsigned int n);
// hex
int		ft_puthex(unsigned int n, char format);
int		get_hex_len(unsigned int n);
// pointer
int		get_ptr_len(unsigned long n);
void		ft_putnbr_hex(unsigned long n);
int		ft_putptr(unsigned long n);
// printf  
int		ft_format(const char format, va_list args);
int		ft_printf(const char *str, ...);
#endif
