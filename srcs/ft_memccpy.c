#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*dst_u;
	unsigned const char	*src_u;

	i = 0;
	dst_u = (unsigned char *)dst;
	src_u = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while ((size_t)i < n)
	{
        if (src_u[i] == (unsigned char)c)
        {
            dst_u[i] = src_u[i];
            return((char*)dst + i);
        }
		dst_u[i] = src_u[i];
		i++;
	}
	return (NULL);
}