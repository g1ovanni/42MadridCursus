/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:40 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/06 00:15:18 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n);

int	main (void) {
	ft_memset("This is the string", '$', 4);

	return (0);
}

void	*ft_memset(void *str, int c, size_t n) {
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &i, 1);
		i++;
	}

	return (0);
}