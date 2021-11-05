/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:53:07 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 21:39:39 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int argument);

int	main (void) {
	ft_isalpha('X');
}

int	ft_isalpha(int argument) {
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a' && argument <= 'z')){
		printf("1");
		return (1);
	}
	else{
		printf("0");
		return (0);
	}
}