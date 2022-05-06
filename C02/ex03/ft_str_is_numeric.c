/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:55:32 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:05:46 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 47 && str[len] < 58)
			len++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str = "duuuuuuuuu";
	char	*str1 = " 12[];6789p";
	char	*str2 = "";
	char	*str3 = "1233455464";

	ft_str_is_numeric(str);
	ft_str_is_numeric(str1);
	ft_str_is_numeric(str2);
	ft_str_is_numeric(str3);
}*/
