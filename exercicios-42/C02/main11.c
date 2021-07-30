#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "Oi\nvoce esta bem?";
	char str2[] = "Come ab\aacate\rbem #";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);
	write(1, "\n", 1);
	return (0);
}