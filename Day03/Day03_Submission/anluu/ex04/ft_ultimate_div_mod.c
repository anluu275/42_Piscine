/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:47:24 by anluu             #+#    #+#             */
/*   Updated: 2019/10/25 22:21:27 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div_temp_a;
	int		mod_temp_b;

	div_temp_a = *a / *b;
	mod_temp_b = *a % *b;
	*a = div_temp_a;
	*b = mod_temp_b;
}
