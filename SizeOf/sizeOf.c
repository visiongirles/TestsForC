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

void	print(char string[])
{
	int	size;

	size = 0;
	while (string[size] != 0)
	{
		size++;
	}
	write(1, string, size);
}

int	main(void)
{
	print("Hello world!\n");
	return (0);
}
