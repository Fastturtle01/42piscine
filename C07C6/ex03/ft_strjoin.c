/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:37:55 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/20 00:35:30 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	size_strjoin(char *st, int *x)
{
	int	i;

	i = 0;
	while (st[i++])
		*x += 1;
}

void	str_join(char *st, char *a, int *x)
{
	int	i;

	i = 0;
	while (st[i])
	{
		a[*x] = st[i++];
		*x += 1;
	}
}

void	concateall(int size, char **strs, char *sep, int *x)
{
	int	j;

	j = 0;
	while (j < size)
	{
		size_strjoin(strs[j], x);
		j++;
		if (j < size)
			size_strjoin(sep, x);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		j;
	int		x;

	x = 0;
	if (size <= 0)
	{
		a = "";
		return (a);
	}
	concateall(size, strs, sep, &x);
	x += 1;
	a = (char *)malloc(sizeof(char) * x);
	j = 0;
	x = 0;
	while (j < size)
	{
		str_join(strs[j], a, &x);
		j++;
		if (j < size)
			str_join(sep, a, &x);
	}
	*strs = a;
	return (*strs);
}

/*#include <stdio.h>
int	main()
{
	char *str[10] = {"13131", "dafadw", "2314141"};
	char x[] = "&13";
	printf("%s", ft_strjoin(3, str, x));
	return (0);
}*/
