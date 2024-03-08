/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:02:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/08 02:40:58 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
  int count;

  count = 0;
	if (n == -2147483648)
	{
		count += ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			n *= (-1);
      count += ft_putchar('-');
		}
		if (n > 9)
			ft_putnbr(n / 10);
		count += ft_putchar(((n % 10) + '0'));
	}
  return (count);
}
