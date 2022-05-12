/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:57:45 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/12 13:58:47 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (i < nb)
	{
		dest[j] += src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Nono";
	char	src[] = "Gogo let's go";
	char	dest1[20] = "Nono";
	char	src1[] = "Gogo let's go";
	
	printf("Before : %s\n", dest);
	ft_strncat(dest, src, 5);
	printf("After :%s\n", dest);
	printf("OG : %s\n", strncat(dest1, src1, 5));	
}*/
