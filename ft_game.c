/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:54:53 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 19:11:57 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "game.h"

int	ft_guess_number_conv(char *buffer)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if(buffer[0] == '\0')
		return (-1);
	while(buffer[i] != '\0')
	{
		if (buffer[i] < '0' || buffer[i] > '9')
			return -1;
		result = result * 10 + (buffer[i] - '0');
		i++;
	}
	return (result);
}

void	ft_game(t_game *game, t_player *player)
{
	char buffer[32];
	int answer;
	
	game->number = ft_guess_number();
	player->attempts = 10;
	player->has_won = 0;
	answer = 0;
	printf("C'est parti!!!!\n");
	printf("\n");
	while(!player->has_won && player->attempts != 0)
	{
		printf("*** Nombre de tentatives: ***\n");
		printf("*** %d                    ***\n", player->attempts);
		printf("\n");
		printf("Le nombre à chercher est : %d\n", game->number);
		printf("Quelle est votre réponse?\n");
		printf("%s: \n", player->name);
		ft_read_input(buffer, sizeof(buffer));
		int i = 0;
		while (buffer[i])
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				break;
			}
			i++;
		}
		answer = ft_guess_number_conv(buffer);
		if (answer < 0)
		{
			printf("Entrée invalide\n");
			printf("\n");
			player->attempts--;
			continue;
		}
		player->number = (unsigned int) answer;
		if(player->number > game->number)
		{
			printf("C'est moins!!!\n");
			printf("\n");
			player->attempts--;	
		}
		else if(player->number < game->number)
		{
			printf("C'est plus!!!\n");
			printf("\n");
			player->attempts--;			
		}
		else
		{
			printf("\n");
			printf("Bravo!!!\n");
			printf("Vous avez trouvez le bon nombre!!!\n");
			printf("\n");
			player->has_won = 1;
		}
	}	
	return;
}
