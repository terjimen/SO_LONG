/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:02 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/14 18:51:10 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MLX42.h"

int main(void) {
    mlx_t *mlx;

    mlx = mlx_init(800, 600, "So Long", true);
    if (!mlx) {
        return (1);
    }
    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (0);
}
