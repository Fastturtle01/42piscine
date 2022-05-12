/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 00:05:11 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/12 14:00:05 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] && to_find[j] && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i - j]);
		i = (i - j) + 1;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Play and go NoNo stoping";
	char	str1[] = "Play and go NoNo stoping";
	char	to_find[] = "ayand";
	char	to_find1[] = "123";
	
	printf("OG :%s\n", strstr(str1, to_find1));
	printf("New1 :%s\n", ft_strstr(str, to_find));
}*/
