/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:36:01 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/12 13:58:20 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "123";
	char	src[] = "kakakakaka";
	char	dest1[] = "123";
	char	src1[] = "kakakakaka";


	printf("Return value : %s\n", ft_strcat(dest, src));
	printf("OG : %s\n", strcat(dest1, src1));
}*/
