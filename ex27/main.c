/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:05 by ede-cola          #+#    #+#             */
/*   Updated: 2023/11/02 11:04:02 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putfile(int fd)
{
	ssize_t	length;
	char	str[1];

	while (fd != -1)
	{
		length = read(fd, str, 1);
		if (length == 0)
			break ;
		else
			write(1, str, length);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	fd = 0;
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(1, "Cannot read file.\n", 18);
		ft_putfile(fd);
		close(fd);
	}
}
