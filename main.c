/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stenner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 13:28:49 by stenner           #+#    #+#             */
/*   Updated: 2019/05/21 10:18:09 by stenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdio.h>
#include <ctype.h>

int		main (int argc, char **argv)
{
	(void)argc;

	printf("%c\n", ft_tolower(argv[1][0]));
	return (0);
}
