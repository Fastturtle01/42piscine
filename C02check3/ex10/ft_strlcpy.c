/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:14:58 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/16 12:52:14 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{	
		while (src[i] && i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	while (i <= size)
	{
		dest[i++] = '\0';
		i++;
	}
	size = 0;
	while (src[size])
		size++;
	return (size);
}

/*int	main(void)
{
	char	dest[7];
	char	src[4444] = "ABcaddadE";

	printf("Source Before %s\n", src);
	ft_strlcpy(dest, src, 3);
	printf("Source After %s\n", src);
	printf("Dest After %s\n", src);
	printf("Source OG %lu\n", strlcpy(dest, src, 5));
	printf("New %d\n", ft_strlcpy(dest, src, 5));
}*/
