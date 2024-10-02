/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labia-fe <labia-fe@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:35:11 by labia-fe          #+#    #+#             */
/*   Updated: 2024/10/02 12:35:50 by labia-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*temp;

	temp = ft_itoa(n);
	ft_putstr_fd(temp, fd);
	free(temp);
}
/*
int main(void)
{
    int n = 33;

    ft_putnbr_fd(n, 1);
    return (0);
}
*/
