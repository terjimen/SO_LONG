/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:02 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/14 18:47:36 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include "libftprintf/include/libft.h"
# include <stdbool.h>
# include "mlx/include/MLX42/MLX42.h"

typedef struct s_game {
    mlx_t *mlx;            // Puntero a la estructura MLX
    void *window;          // Puntero a la ventana
    int width;             // Ancho de la ventana
    int height;            // Altura de la ventana
    char **map;            // Mapa del juego
    int player_x;          // Posición X del jugador
    int player_y;          // Posición Y del jugador
} t_game;

void init_game(t_game *game);
void load_map(t_game *game, const char *map_file);
void render(t_game *game);
void handle_input(t_game *game);
void clean_up(t_game *game);

#endif // SO_LONG_H
