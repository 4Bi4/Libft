/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:40:07 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/23 17:25:43 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "awela";
	char	b[] = "\0";

	printf("before: %s\n", b);
	printf("edited %ld first characters.\n", ft_strlcpy(b, a, 9));
	printf("after: %s\n", b);
	return (0);
}
*/
