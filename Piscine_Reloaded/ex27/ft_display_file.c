/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/05 15:54:26 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/05 17:15:49 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int	error_handling(int argc)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buf[BUFFER_SIZE];
	int		count;

	if (error_handling(argc) == 0)
		return (0);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Cannot read file.\n", 18);
		}
		else
		{
			count = read(fd, buf, BUFFER_SIZE);
			while (count > 0)
			{
				write(1, buf, count);
				count = read(fd, buf, BUFFER_SIZE);
			}
			close(fd);
		}
		return (1);
	}
}
