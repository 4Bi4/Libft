/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:57:32 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 18:47:36 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	slen;

	slen = strlen(s);
	i = 0;
	ptr = malloc(len + 1);
	if (ptr == NULL || slen < start)
		return (NULL);
	if (slen < start)
	{
		while (i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*a = "hola";
	int			start = 6;
	int			len = 5;

	printf("Before: %s\n", a);
	printf("After: %s\n", ft_substr(a, start, len));
	return (0);
}
*/
