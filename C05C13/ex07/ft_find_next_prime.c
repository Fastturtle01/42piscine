/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:29:46 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/18 16:48:41 by tmeelarp         ###   ########.fr       */
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

int	find_primen(int nb)
{
	int	i;
	int	count;
	int	s;

	while (1)
	{
		count = 1;
		s = nb + 1;
		i = 2;
		while (i <= s)
		{
			if (s % i == 0)
				count++;
			i++;
		}
		if (count == 2)
			return (s);
		nb++;
	}
}

int	ft_find_next_prime(int nb)
{	
	int	a;

	if (nb <= 2)
		return (2);
	a = ft_is_prime(nb);
	if (a == 0)
	{
		return (find_primen(nb));
	}
	else
		return (nb);
}

/*int    main()
{
    int a = -1;
    printf("prime : %d", ft_find_next_prime(a));
    return (0);
}*/
