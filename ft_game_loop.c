/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:35:03 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 22:06:00 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

/* 
La loop de jeu est la suivante:
	-quel est votre nom
	L'utilisateur répond (dois je mettre une limite ou tester l'entrée?)
	J'enregistre dans sa structure player.name
	
	Je présente les règles et demande s'il est prêt à jouer
		si non -> on quitte l'app
		Si oui on rentre dans le jeu

	Le jeu:
		On récupère les valeurs du joueur (attempts, etc)
		On appelle ft_guess_number pour déterminer le nombre à chercher
		On lui affiche les infos
		On lui demande de donner un nombre
		Il rentre une donnée
			-si pas un nombre alors on l'engueule et il a une tentative en moins
			-si un nombre on le compare à celui du jeu
				- si trop haut on dit moins on enlève une tentative
				- si trop bas on dit plus on enlève une tentative
				- si le bon on passe player.has_won a 1 et on va à la fin du jeu
				- si tentative à 0 on va à la fin du jeu
	
	La fin du jeu:
		On vérifie le player.has_won
			si à 1 on le félicite
			si à 0 on le réprimande et on donne la bonne valeur
		On lui demande s'il veut refaire une partie
			si oui on revient au jeu
			si non on lui dit au revoir
*/

void	ft_game_loop(t_game *game)
{
	printf("Nombre à deviner: %d", ft_guess_number());
	game->replay = 0;
}