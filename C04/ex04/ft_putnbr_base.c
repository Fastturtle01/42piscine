/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:56:50 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/20 00:56:52 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tee_printf(char c)
{
	write(1, &c, 1);
}

int	count_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] != base[i + 1])
			i++;
		else
			return (1);
		if (base[i] == '-' || base[i] == '+')
			return (1);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basenum;
	int	remainder;

	basenum = count_base(base);
	if (basenum <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	remainder = (nbr % basenum);
	if (nbr > basenum)
		ft_putnbr_base(nbr / basenum, base);
	remainder = base[remainder];
	tee_printf((char)remainder);
}

/*int	main(void)
{
	ft_putnbr_base(-35862, "abcdefgh");
}*/
