/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:02 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/17 13:41:53 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "libftprintf/include/libft.h"
# include "libftprintf/include/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <stdbool.h>

typedef struct s_list
{
	void	*mlx;
	void	*win;
	void	*bush;
	void	*fond;
	void	*poke;
	void	*npc;
	void	*npcstart;
	void	*npcmv;
	void	*npcleft;
	void	*npclmv;
	void	*npcright;
	void	*npcrmv;
	void	*npcback;
	void	*npcbmv;
	void	*imgexit;
	int		errors;
	int		moves;
	int		npccontrol;
	int		linecontrol;
	int		x;
	int		y;
	int		consum;
	int		ex;
	int		back;
	int		wall;
	int		player;
	int		enemy;
	int		height_l;
	int		width_l;
	char	*big_line;
}	t_list;

int		main(int argc, char **argv);
int		init_data(t_list *d, char *map);
int		key_press(int key, t_list *d);
int		check_exit(t_list *d, char letter);
int		ft_free(t_list *d);
void	print_map(t_list *d);
void	read_map(char *map, t_list *d);





#endif // SO_LONG_H
