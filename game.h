/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:16:53 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 21:29:58 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

/* 
	DATA STRUCTURE
*/

typedef struct s_player
{
	char			name;
	int				attempts;
	int				has_won;
	unsigned int	number;
}	t_player;

/* 
	MACCRO
*/

#define MAX_ATTEMPTS 10

/* 
	FUNCTIONS PROTOTYPE
*/

unsigned int	ft_guess_number(void);

#endif