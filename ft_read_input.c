/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:09:39 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 10:26:06 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "game.h"

int	ft_read_input(char *buffer, int size)
{
	int bytes;
	
	bytes = read(0, buffer, size - 1);
	if (bytes <= 0)
		return (0);
	buffer[bytes] = '\0';
	return (1);
}