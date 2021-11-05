/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:05:09 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 21:09:58 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit( int arg );

int	main (void) {
	ft_isdigit(5);
}

int	ft_isdigit(int argument) {
	if (argument >= 0 && argument <= 9){
		printf("1");
		return (1);
	}
	else{
		printf("0");
		return (0);
	}
}