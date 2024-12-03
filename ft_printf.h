/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammouc <hhammouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:56:17 by hhammouc          #+#    #+#             */
/*   Updated: 2024/12/03 02:56:19 by hhammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>


int	    ft_printf(const char *format, ...);
int     ft_putnbr(int n);
int 	ft_putchar(char c);
int 	ft_putstr(char *s);

size_t	ft_strlen(const char *s);

#endif