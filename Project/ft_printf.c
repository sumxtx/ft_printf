/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:19:13 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/08 13:22:19 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formatspec(const char *format, va_list params);

int	ft_printf(const char *strng, ...)
{
	int count;
	va_list params;

	count = 0;
	va_start(params, strng);
	while(*strng != '\0')
	{
		if (*strng == '%')
		{
			++strng;
			count += formatspec(strng, params); 
		}
		else if ((write(1,&*strng,1)) == -1)
			count += 0;
		else
			count++;
		++strng;
	}
	va_end(params);
	return (count);
}


int	formatspec(const char *format, va_list params)
{
	if(*format == 'c')
		return(ft_putchar(va_arg(params, int)));
	if((*format == 'd') || (*format == 'i'))
		return(ft_putnbr(va_arg(params, int)));
	 if(*format == 's')
		 return(ft_putstr(va_arg(params, char*)));
	 if((*format == 'p') || (*format == 'x'))
     return(ft_puthex_frmt(va_arg(params, unsigned long)));
	 if(*format == 'u')
		 return(ft_put_uint(va_arg(params, unsigned int)));
	 if((*format == 'X'))
     return(ft_x_mayus(va_arg(params, unsigned long)));
	 if (*format == '%')
     return(ft_putchar('%'));
	return 0;
}
