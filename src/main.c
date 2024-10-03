/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:06 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/01 21:19:25 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <mlx/mlx.h>
#include <so_long.h>


int	main(void)
{
	void	*mlx;
    void    *mlx_win;
    
	mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
    mlx_loop(mlx);
}