/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:59:36 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/10 18:19:58 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	caesar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			printf("%c", str[i] + 13);
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			printf("%c", str[i] - 13);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		caesar(argv[1]);
	else
		printf("\n");
}
