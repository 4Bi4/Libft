/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:58:32 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 16:27:00 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		hit;
	char	*a;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	a = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j] && hit == 0)
		{
			hit = 1;
			*a = big[i];
			j++;
		}
		if (little[j] == '\0' && hit == 1)
			return (a);
		if (big[i] == little[j] && hit == 1)
			j++;
		if (big[i] != little[j])
		{
			hit = 0;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "awelita dime tu";
	char	b[] = "dime";

	printf("source: %s\nlooking for: %s\n", a, b);
	printf("found: %s\n :)\n", ft_strnstr(a, b, 33));
	return (0);
}
*/
