/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:12:57 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 23:04:32 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char[]);

int	main(void) {
	ft_strlen("Hey you!");
}

int	ft_strlen(char *arg) {
	int	i;

	i = 0;
	while (arg[i] != '\0')
		i++;
	printf("%d", i);
	return (i);
}