/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:38:37 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/01 17:58:01 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	logicfunct(int a, int b, int c)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9' )
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void )
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a < 58)
	{
		b = '0';
		while (b < 58)
		{
			c = '0';
			while (c < 58)
			{
				logicfunct(a, b, c);
				c++;
			}
		b++;
		}
	a++;
	}
}

/*int	main(void )
{
	ft_print_comb();
}*/
