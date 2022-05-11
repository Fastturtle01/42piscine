/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:03:10 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/10 14:20:27 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		digits;
	long	ladygaga;

	ladygaga = (long)nb;
	if (ladygaga < 0)
	{
		write(1, "-", 1);
		ladygaga *= -1;
	}
	digits = (ladygaga % 10) + 48;
	if (ladygaga > 9)
		ft_putnbr(ladygaga / 10);
	write(1, &digits, 1);
}
