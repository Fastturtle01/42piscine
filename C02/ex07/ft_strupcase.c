/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:26:38 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:14:02 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str [i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "dw123131adaAWDADAdwaa";
	char	str1[] = "l;p[dw[al[paaw[dpv';331";

	ft_strupcase(str);
	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str1));
}*/
