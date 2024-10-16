/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_loop_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:48:24 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/16 19:51:55 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
#include <stdio.h>
#include <unistd.h>

typedef struct  sdata {
    void        *mlx;
    void        *win;
    int         color;
}               tdata;


int f(int keysym, tdata *data)
{
    printf("Pressed %d\n", keysym);
    sleep(1);
    return 1;
}



int     change_color(tdata *data)
{

    mlx_string_put(data->mlx, data->win, 150, 150, data->color, "Color Changing Window!");

    // Cycle through some basic colors: RED, GREEN, BLUE
    if (data->color == 0xFF0000)        // If it's red
        data->color = 0x00FF00;        // Change to green
    else if (data->color == 0x00FF00)   // If it's green
        data->color = 0x0000FF;        // Change to blue
    else
        data->color = 0xFF0000;        // Otherwise, go back to red

    return (0);
}

int     main(void)
{
    tdata  data;

    data.mlx = mlx_init();
    data.win = mlx_new_window(data.mlx, 
            400,
            400, 
            "Sample Window");
    data.color = 0xFF0000;  // Start with red color

    mlx_key_hook(data.win, f, &data);
    mlx_loop(data.mlx);

    return (0);
}