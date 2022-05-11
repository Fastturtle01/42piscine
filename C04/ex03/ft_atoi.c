/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:20:55 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/11 22:12:49 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	addup(char *str, int j, int poweroftenth)
{
	int	rest;
	int	result;

	result = 0;
	rest = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		result = str[j] - '0';
		rest = rest + (result * poweroftenth);
		poweroftenth /= 10;
		j++;
	}
	return (rest);
}

int	skipspaces(char *str, int i)
{
	while (str[i] != '-' && str[i] != '+')
	{
		if (str[i] == '\n' || str[i] == ' ' || str[i] == '\r')
			i++;
		else if (str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
			i++;
	}
	return (i);
}

int	countsign(char *str, int i, int *atnegative)
{
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*atnegative += 1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		negative;
	long	poweroftenth;
	int		*atnegative;

	i = 0;
	negative = 0;
	atnegative = &negative;
	poweroftenth = 1;
	i = skipspaces(str, i);
	i = countsign(str, i, atnegative);
	if (negative % 2 != 0 && negative > 0)
		negative = -1;
	else
		negative = 1;
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		poweroftenth *= 10;
		i++;
	}
	poweroftenth /= 10;
	return ((addup(str, j, poweroftenth)) * negative);
}

/*int	main(int argc, char **argv)
{
	//printf("ft_tee :%d\n", ft_atoi("\t   \n---++++5234adds"));
	if(argc == 2)
		printf("ft_tee input :%d\n", ft_atoi(argv[1]));
//	printf("ft_tee overflow:%d\n", ft_atoi("\t   \n---+++-2147483648"));
//	printf("ft_tee underflow:%d\n", ft_atoi("\t   \n---++++2147483649"));
}*/
