/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:44:28 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 21:44:44 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int argument) {
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a' && argument <= 'z') || (argument >= 0 && argument <= 9))
		return (1);
	else
		return (0);
}