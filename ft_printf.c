/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammouc <hhammouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:55:47 by hhammouc          #+#    #+#             */
/*   Updated: 2024/12/02 23:11:53 by hhammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printer(char format, va_list list)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(list,int));
	else if (format == 'c')
		ft_putchar(va_arg(list,int));
	else if (format == '%')
		ft_putchar('%');
	else if (format == 's')
		ft_putstr(va_arg(list,char *));
	return 0;
}

int	ft_printf(const char *format, ...)
{
	int		i;

	va_list	list;
	va_start(list,format);
	
	i = 0;	
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			printer(format[i], list);
		}
		else
			ft_putchar(format[i]);
		i++;
	}

	va_end(list);
	return (ft_strlen(format));
}

int	main(void)
{
	int		number = 1337;
	char	s[] = "aka madrasat nawabi4";

	int i = ft_printf("hadchi jamil from %d %s\n",number,s);
	int j = printf("hadchi jamil from %d %s\n",number,s);
	printf("%d\n%d",i,j);

	
	return 0;
}