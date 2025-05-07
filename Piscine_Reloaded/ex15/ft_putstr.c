/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:21:17 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/01 18:13:59 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_putstr(char *str)
{
	char	c;
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		ft_putchar(c);
		index++;
	}
}
/*
int	main(void)
{
	char	*str = "Hello beautiful world";

	ft_putstr(str);
	return (0);
}
*/
