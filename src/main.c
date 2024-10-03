/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:06 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/03 19:39:56 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <mlx/mlx.h>
#include <../includes/so_long.h>

//iniciar, abrir ventana,
int	main(void)
{
	void	*mlx;
    t_data  img;

	mlx = mlx_init();
	img.img = mlx_new_image(mlx, 1920, 1080);

	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
}