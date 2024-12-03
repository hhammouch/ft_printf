/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammouc <hhammouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:55:47 by hhammouc          #+#    #+#             */
/*   Updated: 2024/12/03 03:14:15 by hhammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printer(char format, va_list list)
{
	int	count;
	char *str;
	
	count = 0;
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (format == 'c')
		count += ft_putchar(va_arg(list,int));
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 's')
	{
		char *str = va_arg(list, char *);
		if (!str)
			str = "(null)";
		count += ft_putstr(str);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	list;

	va_start(list,format);
	count = 0;
	i = 0;	
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += printer(format[i], list);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
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