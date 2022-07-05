/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:28:49 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/08 17:48:39 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}

/*int	main()
{
	char	str1[10] = "Hello";
	char	str2[2];

	ft_strcpy(str2, str1);
	printf("%s\n", str2);
	printf("%s\n", str1);
}*/
