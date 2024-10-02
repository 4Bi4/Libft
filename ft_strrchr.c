/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:11:38 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/23 19:17:28 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s",ft_strrchr("abuela babuino", 'b'));
	return (0);
}
*/
