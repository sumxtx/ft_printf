/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:19:13 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/07 14:27:20 by smoraes-         ###   ########.fr       */
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
		return(ft_punbr(va_arg(params, int)));
	 //*	if s
	 //*	if p
	 //*	if d
	 //*	if i
	 //*	if u
	 //*	if x
	 //*	if X
	 //*	if %
	return 0;
}
