/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:21:50 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/01 16:44:39 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		factorial *= (nb);
		nb--;
	}
	return (factorial);
}
/*
int	main(void)
{
	int	nb;

	nb = 15;
	printf("Value of function:%d\n", ft_iterative_factorial(nb));
	return (0);
}
*/
