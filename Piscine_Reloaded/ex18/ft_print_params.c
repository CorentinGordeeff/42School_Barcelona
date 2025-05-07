/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:35:40 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/05 17:43:27 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	char	c;
	int		argnumber;
	int		index;

	argnumber = 1;
	if (argc == 1)
	{
		return (0);
	}
	while (argnumber < argc)
	{
		index = 0;
		while (argv[argnumber][index] != '\0')
		{
			c = argv[argnumber][index];
			ft_putchar(c);
			index++;
		}
		ft_putchar('\n');
		argnumber++;
	}
	return (0);
}
