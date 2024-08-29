
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int i;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
		return src_len;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (src_len);
}

int main(void)
{
	char 	src[] = "Hola mundo";
	char	dst[10];
	unsigned int	size;

	size = ft_strlcpy(dst, src, 4);
	printf("La longitud de src es: %u\n", size);
	printf("Lo que hemos copiado es: %s\n", dst);
	return (0);
}
