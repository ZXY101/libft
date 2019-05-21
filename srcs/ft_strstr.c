/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stenner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:23:04 by stenner           #+#    #+#             */
/*   Updated: 2019/05/21 10:43:08 by stenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle == NULL)
		return(haystack);
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
				j++;
			else
				return (NULL);
			i++;
		}
		return (needle);
	}
	return (needle);
}
