/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:15:52 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 19:12:56 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

void	ft_game_end(t_player *player, t_game *game)
{
	char buffer[32];
	
	if (!player->has_won)
	{
		printf("Malheureusement c'est perdu!!!\n");
		printf("\n");
		printf("Tu es trop nul....\n");
		printf("Comment tu as fais pour ne pas trouver: %u\n", game->number);
		printf("\n");
	}
	else
	{
		printf("Toutes mes félicitations tu as gagné!!!\n");
		printf("\n");
		printf("Y a pas à dire, tu es un dieu et ton temps est tellement pas précieux,\n");
		printf("Que tu as réussi à trouver: %u\n", game->number);
		printf("\n");
	}
	while (1)
	{
		printf("*************************\n");
		printf("*** Veux tu rejouer ? ***\n");
		printf("*** ( y / n )         ***\n");
		printf("*************************\n");
		ft_read_input(buffer, sizeof(buffer));
		
		if (buffer[0] == 'Y' || buffer[0] == 'y')
		{
			game->replay = 1;
			return;
		}
		if (buffer[0] == 'N' || buffer[0] == 'n')
		{
			game->replay = 0;
			return;
		}	
		printf("\n");
		printf("Entrée invalide. Veuillez répondre par Y ou N.\n");
		printf("\n");
	}
}
