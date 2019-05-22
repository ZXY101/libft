#include "./includes/libft.h"
#include <stdio.h>
#include <ctype.h>


int		main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%d\n", ft_atoi("\\      123a213"));
	return (0);
}

/*
int main () {
   const char haystack[20] = "int";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strnstr(haystack, needle, 4);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
*/
