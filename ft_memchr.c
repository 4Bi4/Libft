/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:29:42 by labia-fe          #+#    #+#             */
/*   Updated: 2024/09/23 19:57:56 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*subj;
	unsigned char		target;

	subj = s;
	target = (unsigned char)c;
	while (n > 0)
	{
		if (*subj == target)
			return (subj);
		n--;
		s++;
	}
	return ('\0');
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "when i was, a young boy";

	printf("before: %s\n", a);
	printf("after: %s\n", (char *)ft_memchr(a, 's', 3));
	return (0);
}
*/
