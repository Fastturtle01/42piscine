/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:47:29 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:12:18 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 31 && str[len] <= 127)
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

	ft_str_is_printable(str);
	ft_str_is_printable(str1);
	ft_str_is_printable(str2);
}*/
