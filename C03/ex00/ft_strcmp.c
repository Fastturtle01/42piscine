/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:16:54 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/12 14:01:10 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Taylor Swift";
	char	s2[] = "Taylor Swift";
	char	s3[] = "Taylor Swift";
	char	s4[] = "Taylor \200Wift";
	char	s5[] = "Taylor \200wift";
	char	s6[] = "Taylor Swift";
	
	printf("ft_tee1: %d\n", ft_strcmp(s1, s2));
	printf("ft_tee2: %d\n", ft_strcmp(s3, s4));
	printf("ft_tee3: %d\n", ft_strcmp(s5, s6));
	printf("original1: %d\n", strcmp(s1, s2));
	printf("original2: %d\n", strcmp(s3, s4));
	printf("original3: %d\n", strcmp(s5, s6));
}*/
