/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:57:24 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/23 19:13:11 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	c = c - 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 'd';

	printf("before: %c\n", a);
	printf("after: %c\n", ft_toupper(a));
	return (0);
}
*/
