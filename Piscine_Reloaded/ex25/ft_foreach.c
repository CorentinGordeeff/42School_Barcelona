/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:51:12 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/05 17:46:05 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	f(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ();
	}
	if (n < 0)
	{
		n *= -1;
		write (1, "-", 1);
	}
	if (n > 9)
	{
		f(n / 10);
		f(n % 10);
	}
	else
	{
		c = n + '0';
		write (1, &c, 1);
	}
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	length = 10;

	ft_foreach(tab, length, f);
	return (0);
}
*/
