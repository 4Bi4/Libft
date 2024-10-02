/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:35:23 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 12:21:40 by labia-fe         ###   ########.fr       */
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

char  **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		words;
	char	**result;

	words = ft_nwords(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < words)
	{
		while (s[k] == c)
			k++;
		j = k;
		while (s[k] != c && !s[k])
			k++;
		result[i] = malloc(sizeof(char) * (k - j + 1));
		if (!result[i])
		{
			while(i > 0)
			{
				i--;
				free(result[i]);
			}
			free(result);
			return (NULL);
		}
		strncpy(result[i], &s[j], k - j);
		result[i][k - j] = '\0';
		i++;
	}
	result[words] = NULL;
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
