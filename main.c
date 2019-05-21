/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stenner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 13:28:49 by stenner           #+#    #+#             */
/*   Updated: 2019/05/21 12:54:30 by stenner          ###   ########.fr       */
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
   const char haystack[20] = "Tu";
   const char needle[10] = "oint";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
