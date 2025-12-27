/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:56:52 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 22:05:43 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game.h"

int	main(void)
{
	/*
	 PROJECT: Le Juste Prix
	
	 TODO: game loop
	 TODO: read input
	 TODO: compare guess
	 TODO: attempts management
	 TODO: print result
	 TODO: end of game / replay
	
	 DONE: random number generation
	
	 DONE: player data structure
	 DONE: header file
	*/

	t_game game;
	game.replay = 1;
	srand(time(NULL));
	
	while(game.replay)
		ft_game_loop(&game);
	return (0);
}
