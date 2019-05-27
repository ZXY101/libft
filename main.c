#include "./includes/libft.h"
#include <stdio.h>
#include <ctype.h>

/*
int		main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", ft_strrchr("abcdeaf", 'a'));
	return (0);
}
*/
/*
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   bzero(str,7);
   puts(str);
   
   return(0);
}
*/

/*
char *msg = "This is the string: not copied";

int main() {

    char buffer[80];
    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );
    printf( "%s\n", buffer );
    return (0);
  }
*/




int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}/*
int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}
*/
/*
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s\n", result);
   return 0;
}
*/

/*
int main () {
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   ft_strcat(dest, src);

   printf("Final destination string : |%s|\n", dest);

   return(0);
}
*/
/*
int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strncat(dest, src, 10);

   printf("Final destination string : |%s|\n", dest);
   
   return(0);
}
*/
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
