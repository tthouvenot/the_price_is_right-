/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:56:52 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 19:13:39 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game.h"

int	main(void)
{
	t_game	game;
	
	srand(time(NULL));
	ft_game_loop(&game);
	return (0);
}
