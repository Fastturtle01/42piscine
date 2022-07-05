/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:47:14 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/20 00:34:44 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	j = 0;
	if (max - min <= 0)
	{
		return (0);
	}
	i = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
		i[j++] = min++;
	return (i);
}
/*
int	main(void)
{
	int	*i;
	int j;

	j = -1;
	i = ft_range(1, 1);
	free(i);
}*/
