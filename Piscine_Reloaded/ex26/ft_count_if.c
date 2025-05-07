/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:36:39 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/05 15:51:23 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_non_empty(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			occ++;
		}
		i++;
	}
	return (occ);
}
/*
int	main(void)
{
	char	*tab[] = {"Hello", "my", "dear", "world", 0};

	printf("number of occurences: %d", ft_count_if(tab, is_non_empty));
	return (0);
}
*/
