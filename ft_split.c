/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:35:23 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 18:32:26 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	ft_nwords(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char 	**ft_split(char const *s, char c)
{
	return (result);
}

/*
#include  <stdio.h>

int	main(void)
{
	char a[] = "Hola muy buenas tardes";
	char **b;
	int i = 0;

	printf("Before: %s\n", a);
	b = ft_split(a, ' ');
	printf("After: \n");
	if (!b)
	{
		printf("Malloc Error :(");
		return (1);
	}
	while (b[i])
	{
		printf("%s\n", b[i]);
		i++;
	}
}
*/
