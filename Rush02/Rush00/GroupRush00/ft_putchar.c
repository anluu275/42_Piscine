/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:51:57 by anluu             #+#    #+#             */
/*   Updated: 2019/10/27 22:49:43 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char d, char x)
{
	int c;

	c = 2;
	write(1, &a, 1);	
	if (x >= 2)
	{
		while (c < x)
		{
			write(1, &b, 1);
			c++;
		}
		write(1, &d, 1);
	}
	write(1, "\n", 1);
}
