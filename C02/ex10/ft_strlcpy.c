/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:14:58 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/07 14:31:53 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
	char	dest[11];
	char	src[7] = "ABc dE";

	printf("Source Before %s\n", src);
	ft_strlcpy(dest, src, 3);
	printf("Source After %s\n", src);
	printf("Dest After %s\n", dest);
}*/
