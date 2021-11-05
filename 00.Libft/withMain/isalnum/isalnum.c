/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:53:07 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 21:42:36 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int argument);

int	main (void) {
	ft_isalnum('X');
}

int	ft_isalnum(int argument) {
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a' && argument <= 'z') || (argument >= 0 && argument <= 9)){
		printf("1");
		return (1);
	}
	else{
		printf("0");
		return (0);
	}
}