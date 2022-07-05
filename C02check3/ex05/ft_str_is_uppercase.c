/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:59:32 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:10:13 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 64 && str[len] < 91)
			len++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	str[20] = "duuuuuuuuu";
	char	str1[23] = " 12[];6789p";
	char	str2[21] = "";
	char	str3[20] = "ASDPKJAWLKDJIA";

	ft_str_is_uppercase(str);
	ft_str_is_uppercase(str1);
	ft_str_is_uppercase(str2);
	ft_str_is_uppercase(str3);
}*/
