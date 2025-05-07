/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/02 15:05:51 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/05 12:12:31 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void	ft_putstring(int argnum, int argc, char *argv[])
{
	int		i;
	char	c;

	while (argnum < argc)
	{
		i = 0;
		while (argv[argnum][i] != '\0')
		{
			c = argv[argnum][i];
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		argnum++;
	}
}

int	main(int argc, char *argv[])
{
	int		j;
	int		argnum;

	j = 1;
	while (j < argc - 1)
	{
		argnum = 1;
		while (argnum < argc - 1)
		{
			if (ft_strcmp(argv[argnum], argv[argnum + 1]) > 0)
			{
				ft_swap(&argv[argnum], &argv[argnum + 1]);
			}
			argnum++;
		}
		j++;
	}
	argnum = 1;
	ft_putstring(argnum, argc, argv);
	return (0);
}
