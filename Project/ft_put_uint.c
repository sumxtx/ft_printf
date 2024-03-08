/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:47:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/08 03:16:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_uint(unsigned int n)
{
  static int count;

  count = 0;
	if (n > 9)
	{
		ft_put_uint((n / 10));
	}
	count += ft_putchar((n % 10) + '0');
  return (count);
}
