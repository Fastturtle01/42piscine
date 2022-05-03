/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:45:12 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/01 18:13:25 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	j = 0;
	while (j <= 99)
	{
		i = 0;
		while (i <= 99)
		{
			if (i > j)
			{
				ft_print((j / 10) + 48);
				ft_print((j % 10) + 48);
				ft_print(' ');
				ft_print((i / 10) + 48);
				ft_print((i % 10) + 48);
				if (j == 98 && i == 99)
					return ;
				else
					write(1, ", ", 2);
			}
			i++;
		}
		j++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
