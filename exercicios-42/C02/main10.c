#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	int 	dest_size;
	char 	*src;
	char 	*dest;

	dest_size = 5;
	src = calloc(25, sizeof(char));
	dest = calloc(dest_size, sizeof(char));
	src = "Come abacate - vovó Juju";
	src_size = ft_strlcpy(dest, src, dest_size);
	printf("\nsrc: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n\n", src_size);
	return(0);
}