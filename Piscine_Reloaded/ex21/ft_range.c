/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:16:17 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/05 12:44:21 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	num;
	int	i;
	int	*ptr;

	if (min >= max)
	{
		return (NULL);
	}
	num = max - min;
	ptr = (int *)malloc(sizeof(int) * num);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < num)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("%p", ft_range(min, max));
	return (0);
}
*/
