/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guess_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:27:03 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 18:07:44 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_guess_number(void)
{
	unsigned int	number;
	
	number = rand() % (50000 - 10000 + 1) + 10000;
	return (number);
}
