/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stenner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:39:19 by stenner           #+#    #+#             */
/*   Updated: 2019/05/28 18:33:26 by stenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>
static int	count_elements(char const *s, char c)
{
	int 	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	count++;
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	int		element_count;
	char	**array;
	char	*str;

	if (!s || !c)
		return (NULL);
	i = 0;
	j = 0;
	x = 0;
	element_count = count_elements(s, c);
	ft_putnbr(element_count);
	array = (char**)malloc(sizeof(char*) * element_count);
	if (!array)
		return (NULL);
	while (x < element_count)
	{
		while (s[i] == c)
			i++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
		}
		str = (char*)malloc(sizeof(char) * j);
		if (!str)
			return (NULL);
		ft_memcpy(str, s + i, (j - i));
		printf("(%s)", str);
		array[x] = str;
		x++;
		i = j;
	}
	return (array);
}
