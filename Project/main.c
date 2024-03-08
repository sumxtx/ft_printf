/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:50:58 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/08 03:38:35 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int count;
	int count2;
  int *ptr;
  unsigned int ptr2 = 452452345;

	count = 0;
	count2 = 0;
  ptr = &count;
	count += ft_printf("my -> a,%c,%s,%d,%i,%p,%u,%%,%X\n",'z',"sssss",2,2, ptr,-20,ptr2);
	count2 += printf("orig -> a,%c,%s,%d,%i,%p,%u,%%,%X\n",'z',"sssss",2,2, ptr,-20,ptr2);
  printf("\nmy count -> %d",count);
  printf("\norig count -> %d",count2);


	return (0);
}
