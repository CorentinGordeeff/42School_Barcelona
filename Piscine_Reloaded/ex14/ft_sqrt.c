/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:11:49 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/01 17:20:28 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (root * root < nb)
	{
		root++;
	}
	if (root * root == nb)
	{
		return (root);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int	nb;

	nb = 4787;
	printf("square root of function: %d", ft_sqrt(nb));
	return (0);
}
*/
