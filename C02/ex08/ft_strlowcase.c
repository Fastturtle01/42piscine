/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:42:11 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:15:02 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str [i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "dw123131adaAWDADAdwaa";
	char	str1[] = "l;p[dw[al[DWADSA[dAWDv';331";

	ft_strlowcase(str);
	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str1));
}*/
