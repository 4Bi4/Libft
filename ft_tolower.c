/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:16:01 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/23 19:14:11 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char a = 'A';
	printf("before: %c\nafter: %c\n", a, ft_tolower(a));
	return (0);
}
*/
