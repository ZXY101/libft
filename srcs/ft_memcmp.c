#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	const char *s1_u;
	const char *s2_u;

	i = 0;
	s1_u = (const char*)s1;
	s2_u = (const char*)s2;

	while ((size_t)i < n)
	{
		if (s1_u[i] != s2_u[i])
			break ;
	}
	return (s1_u - s2_u);
	
}