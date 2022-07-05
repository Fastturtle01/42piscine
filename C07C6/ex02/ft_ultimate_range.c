/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:19:45 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/20 17:33:14 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	i = (int *)malloc(sizeof(int) * len);
	len = 0;
	if (i == NULL)
		return (-1);
	while (min < max)
		i[len++] = min++;
	*range = i;
	return (len);
}

/*int	main(void)
{
	int	i;
	int *range[12];

	i = ft_ultimate_range(range, -1, 2);
}*/
