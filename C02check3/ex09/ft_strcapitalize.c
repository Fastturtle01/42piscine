/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:44:01 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/16 12:52:48 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_upperstep(char *str, int i)
{
	if (str[i - 1] >= 32 && str[i - 1] <= 47)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	else if (str[i - 1] >= 58 && str[i - 1] <= 64)
	{		
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	else if (str[i - 1] >= 91 && str[i - 1] <= 96)
	{		
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	else if (str[i - 1] >= 123 && str[i - 1] <= 126)
	{		
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
}

void	ft_lowerstep(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_lowerstep(str, i);
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else
			ft_upperstep(str, i);
		i++;
	}
	return (str);
}
