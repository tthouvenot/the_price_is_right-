/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:35:03 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 19:13:11 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

void	ft_game_loop(t_game *game)
{
	t_player player;
	int launch_game;
	
	launch_game = ft_game_intro(&player);
	if(!launch_game)
	{
		game->replay = 0;
		return;
	}
	game->replay = 1;
	while (game->replay)
	{
		ft_game(game, &player);
		ft_game_end(&player, game);
	}
}
