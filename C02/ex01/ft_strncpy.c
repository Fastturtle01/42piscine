/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:58:45 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/06 14:01:20 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (len < n && src[len])
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
		dest[len++] = '\0';
	return (dest);
}

/*int	main(void)
{

	char	src[55] = "Hello, it's me";
	char	dest[5];

	ft_strncpy(dest, src, 3);
	printf("%s\n", src);
	printf("%s\n", dest);
}*/
