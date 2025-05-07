/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/05 11:34:31 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/05 12:01:15 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		j;

	j = 0;
	len = ft_strlen(src);
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (src[j] != '\0')
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	src[] = "Hello World";
	printf("ptr equals: %s", ft_strdup(src));
	return (0);
}
*/
