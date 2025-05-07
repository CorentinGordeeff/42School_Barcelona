/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:02:49 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/05 18:01:02 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 13)
	{
		if (nb == 0 || nb == 1)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_factorial(nb -1));
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 7;
	printf("Value of function:%d\n", ft_recursive_factorial(nb));
	return (0);
}
*/
