/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:14:57 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 18:43:38 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	file_name_missing(void)
{
	write(1, "File name missing.\n", 19);
	return (0);
}

int	too_many_args(void)
{
	write(1, "Too many arguments.\n", 20);
	return (0);
}

int	cant_read_file(void)
{
	write(1, "Cannot read file.\n", 18);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		open_result;
	char	buf[1];

	if (argc == 1)
		return (file_name_missing());
	else if (argc > 2)
		return (too_many_args());
	open_result = open(argv[1], O_RDONLY);
	if (open_result < 0)
		return (cant_read_file());
	while (read(open_result, buf, 1))
		write(1, &buf, 1);
	close(open_result);
	return (1);
}
