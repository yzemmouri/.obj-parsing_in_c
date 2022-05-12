/*

v 0.232406 -1.216630 1.133818



*/


#include <stdio.h>
#include "libft/libft.h"

int			ft_lines_in_file(char *str)
{
	int		fd;
	int		count;
	char	*line;

	count = 0;
	if ((fd = open(str, O_RDONLY)) < 0)
		return (-1);
	while (get_next_line(fd, &line))
	{
		count++;
		free(line);
	}
	if (close(fd) < 0)
		return (-1);
	return (count);
}

int main(int ac, char **av)
{
    int     fd;
    char	*line;
    int     nbr_lines;

    if (ac < 2)
        return(1);
    nbr_lines = ft_lines_in_file(av[1]);
    printf("%d\n", nbr_lines);
    fd = open(av[1], O_RDONLY);
    while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n",line);
	}
    return (0);
}