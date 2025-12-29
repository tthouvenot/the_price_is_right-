/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_intro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:35:11 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 11:28:12 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>
#include <string.h>

int	ft_game_intro(t_player *player)
{
	char buffer[32];
	
	printf("*****************************\n");
	printf("*******               *******\n");
	printf("******* Le juste prix *******\n");
	printf("*******               *******\n");
	printf("*****************************\n");
	printf("\n");
	printf("\n");
	printf("Bienvenue au juste prix!\n");
	printf("\n");
	printf("Quel est votre nom?\n");
	
	ft_read_input(buffer, sizeof(buffer));
	strncpy(player->name, buffer, sizeof(player->name) - 1);
	player->name[sizeof(player->name) - 1] = '\0';
	printf("Bonjour %s\n", player->name);
	printf("\n");
	printf("Les règles sont simples:\n");
	printf("Vous devez trouver le prix entre 10.000 et 100.000 .\n");
	printf("Pour ça vous disposez de 10 essaies.\n");
	printf("Nous n'acceptons que des chiffres.\n");
	printf("Une faute de frappe et vous perdrez 1 essaie.\n");
	printf("Si vous êtes au-dessus, on dira que c'est moins.\n");
	printf("Si vous êtes en-dessous, on dira que c'est plus.\n");
	printf("A chaque mauvais réponse c'est 1 essaie en moins.\n");
	printf("En cas de succès vous gagnerez:\n");
	printf("....\n");
	printf("....\n");
	printf("....\n");
	printf("....\n");
	printf("Le respect de 42.\n");
	printf("\n");
	while (1)
	{
		printf("************************\n");
		printf("*** Êtes-vous prêt ? ***\n");
		printf("*** ( y / n )        ***\n");
		printf("************************\n");
		ft_read_input(buffer, sizeof(buffer));
		
		if (buffer[0] == 'Y' || buffer[0] == 'y')
			return (1);
		if (buffer[0] == 'N' || buffer[0] == 'n')
			return (0);	
		printf("\n");
		printf("Entrée invalide. Veuillez répondre par Y ou N.\n");
		printf("\n");
	}
}