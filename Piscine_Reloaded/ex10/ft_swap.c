/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:06:13 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/01 15:32:06 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 10;
	y = 20;
	a = &x;
	b = &y;

	ft_swap(a, b);
	printf("Value of pointer a:%d", *a);
	printf("Value of pointer b:%d", *b);
	return (0);
}
*/
