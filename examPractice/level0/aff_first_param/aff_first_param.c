/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:00:48 by anluu             #+#    #+#             */
/*   Updated: 2019/11/06 23:25:50 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main ( int argc, char **argv)
{
	if (argc >= 2)
	{
		while (*argv[1])
		{
			write( 1, argv[1], 1);
			argv[1]++;
		}
		write(1, "\n",1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
