/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:23:27 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/26 11:45:20 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> //librería del size_t

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *)s;
	while (n > 0 && *dst != '\0')
	{
		*dst = (unsigned char)c;
		dst++;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>

int	main(void)
{
	char a[] = "hola";

	printf("before: %s\n", a);
	printf("after: %s\n", (char *)ft_memset(a, 'l', 1));
	return (0);
}
*/
