/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:23:56 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/26 11:34:09 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (dest > src)
	{
		while (i <= n && n > 0)
		{
			i++;
			dst[n - i] = sc[n - i];
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, src);
		return (dest);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "jjjjjjjj";
	char	b[] = "00000000";

	printf("before: %s\n", b);
	printf("after: %s\n", (char *)ft_memmove(b, a, 0));
	return (0);
}
*/
