/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:55:20 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:08:21 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 96 && str[len] < 123)
			len++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[20] = "duuuuuuuuu";
	char	str1[23] = " 12[];6789p";
	char	str2[21] = "";
	char	str3[20] = "ASDPKJAWLKDJIA";

	ft_str_is_lowercase(str);
	ft_str_is_lowercase(str1);
	ft_str_is_lowercase(str2);
	ft_str_is_lowercase(str3);
}*/
