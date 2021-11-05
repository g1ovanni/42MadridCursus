/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:03:07 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 22:07:35 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int argument);

int	main (void) {
	ft_isprint('\f');
}

int	ft_isprint(int argument) {
	if (argument >= 32 && argument <= 126){
		printf("1");
		return (1);
	}
	else{
		printf("0");
		return (0);
	}
}