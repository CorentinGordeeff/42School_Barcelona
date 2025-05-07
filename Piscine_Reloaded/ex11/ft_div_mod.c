/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:34:34 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/01 16:19:02 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	tempa;
	int	tempb;

	a = 10;
	b = 2;
	tempa = 0;
	tempb = 0;
	div = &tempa;
	mod = &tempb;

	ft_div_mod(a, b, div, mod);
	printf("value of div pointer: %d\n", *div);
	printf("value of mod pointer: %d\n", *mod);
	return (0);
}
*/
