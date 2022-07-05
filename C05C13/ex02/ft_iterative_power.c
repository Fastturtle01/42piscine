/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:36:48 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/17 14:21:32 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	initial;

	initial = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= initial;
		power--;
	}
	return (nb);
}

/*int	main(void)
{
	printf("power = %d\n", ft_iterative_power(0, 0));
	printf("power = %d\n", ft_iterative_power(2, -3));
	printf("power = %d\n", ft_iterative_power(4, 1));
	printf("power = %d\n", ft_iterative_power(4, 2));
}*/
