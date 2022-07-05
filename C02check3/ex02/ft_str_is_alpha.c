/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:41 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/08 17:49:21 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 64 && str[len] < 91)
			len++;
		else if (str[len] > 96 && str[len] < 123)
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
	char	*str = "duuuuuuuuu";
	char	*str1 = " 12[];6789p";
	char	*str2 = "";
	char	*str3 = "iijkkdwooippqweoop[eqwewq[jwwe";

	ft_str_is_alpha(str);
	ft_str_is_alpha(str1);
	ft_str_is_alpha(str2);
	ft_str_is_alpha(str3);
}*/
