/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_frmt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:56:46 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/08 13:25:22 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	[0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F]
	40732766361216
	0x7ffee68c1680
*/

int ft_puthex_frmt(unsigned long n)
{
  static int   count;
	char  *hextab;

  count = 0;
  hextab= "0123456789abcdefx";
	if (n > 9)
	{
		ft_puthex_frmt((n / 16));
	}
	if (n < 10)
	{
		count += ft_putstr("0x");
	}
	count += ft_putchar(hextab[n % 16]);
  return (count);
}
