/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:56:52 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 21:28:10 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game.h"

int	main(void)
{
	/* 
	
	Le juste prix!
	On accueil un joueur et on l'invite à deviner un nombre entre x et y
	Le joueur a 10 tentatives
	A chaque tentative on lui dit + ou - selon s'il est au dessus ou en dessous
	S'il trouve avant les 10 tentatives il gagne
	Sinon il perd on lui propose de réessayer
	Si oui on rejoue, si non on quitte.
	
	*/

	/*
	 PROJECT: Le Juste Prix
	
	 TODO: game loop
	 TODO: read input
	 TODO: compare guess
	 TODO: attempts management
	 TODO: print result
	 TODO: end of game / replay
	
	 DONE: random number generation
	
	 TODO: player data structure
	 TODO: header file
	
	 TODO: putstr
	 TODO: putnbr
	 TODO: atoi
	*/

	srand(time(NULL));
	printf("Nombre à deviner: %d", ft_guess_number());
	return (0);
}
