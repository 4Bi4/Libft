/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:26:03 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/26 16:13:07 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= 0)
		return (srclen);
	if (size <= dstlen)
		return (size + srclen);
	while (dst[i] != '\0' && (i + dstlen) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[srclen + i] = '\0';
	return (dstlen + srclen);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hola ";
	char	b[] = "Mundo";

	printf("before: %s\n", a);
	printf("creating a string of size %ld.\n", ft_strlcat(a, b, 40));
	printf("after: %s\n", a);
	return (0);
}
*/
