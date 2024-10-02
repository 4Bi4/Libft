/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:01:53 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 16:56:23 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned const char	*sc;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (i < n && dst[i] != '\0')
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "aaaaaaa";
	char	b[] = "uterbraten";

	printf("before: %s\n", b);
	printf("after: %s\n", (char *)ft_memcpy(a, b, 4));
	return (0);
}
*/
