/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:52:04 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 21:58:20 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit( int arg );

int	main (void) {
	ft_isdigit('#');
}

int	ft_isdigit(int argument) {
	if (argument >= 0 && argument <= 43){
		printf("1");
		return (1);
	}
	else{
		printf("0");
		return (0);
	}
}