/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:24:29 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/17 15:48:09 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (nb > i && i * i < nb && i <= 46340)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

/*int	main(void)
{
	printf("result = %d\n", ft_sqrt(390625));
	printf("result = %d\n", ft_sqrt(2147395600));
	printf("result = %d\n", ft_sqrt(443556));
	printf("result = %d\n", ft_sqrt(-1));
}*/
