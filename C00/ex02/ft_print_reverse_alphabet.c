/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:18:31 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/01 22:51:47 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void )
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

/*int	main(void )
{
	ft_print_reverse_alphabet();
}*/
