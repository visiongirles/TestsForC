/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:59:26 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/10 12:59:28 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *pa, int *pb)
{
	int	t;

	t = *pa;
	*pa = *pb;
	*pb = t;
	printf("swap: a = %d, b = %d, pb = %p, pa = %p\n", *pa, *pb, pb, pa);
}

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 17;
	swap(&a, &b);
	printf("main: a = %d, b = %d\n", a, b);
	return (0);
}
