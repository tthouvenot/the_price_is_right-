/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:16:53 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/29 17:58:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

/*********************
***	DATA STRUCTURE ***
**********************/

typedef struct s_player
{
	char			name[32];
	int				attempts;
	int				has_won;
	unsigned int	number;
}	t_player;

typedef struct	s_game
{
	unsigned int	number;
	int				replay;	
}	t_game;

/*************
***	MACCRO ***
**************/

#define MAX_ATTEMPTS 10

/**************************
***	FUNCTIONS PROTOTYPE ***
***************************/

unsigned int	ft_guess_number(void);
void			ft_game_loop(t_game *game);
int				ft_read_input(char *buffer, int size);
int				ft_game_intro(t_player *player);
void			ft_game(t_game *game, t_player *player);
void			ft_game_end(t_player *player, t_game *game);

#endif