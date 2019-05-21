/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stenner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 13:28:49 by stenner           #+#    #+#             */
/*   Updated: 2019/05/21 14:02:34 by stenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdio.h>
#include <ctype.h>

/*
int		main (int argc, char **argv)
{
	(void)argc;

	printf("%c\n", ft_strstr(argv[1][0]));
	return (0);
}
*/

int main () {
   const char haystack[20] = "int";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strnstr(haystack, needle, 4);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
