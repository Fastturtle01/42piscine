/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:03:42 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/17 21:48:37 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb % 2 != 0)
		i = 3;
	else
		i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*int	main(void)
{
	printf("2 is %d\n", ft_is_prime(2));
	printf("7 is %d\n", ft_is_prime(7));
	printf("3 is %d\n", ft_is_prime(3));
	printf("1 is %d\n", ft_is_prime(1));
	printf("25 is %d\n", ft_is_prime(25));
	printf("4 is %d\n", ft_is_prime(127));
	printf("0 is %d\n", ft_is_prime(0));
}*/
