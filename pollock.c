/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pollock.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:52:33 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/16 22:02:24 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
int main (void)
{
    void    *mlx_connection;
    void    *mlx_window;

    mlx_connection = mlx_init();
    mlx_window = mlx_new_window(mlx_connection, 500, 500, "mi ventana");
}


/*
pollock:
"https://www.youtube.com/watch?v=9eAPbNUQD1Y"
*/
