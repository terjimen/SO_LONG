/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:08:16 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/15 16:25:33 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define MALLOC_ERROR	1
#define WIDTH			400
#define HEIGHT			400


int	main()
{
	void	*mlx_connection;
	void	*mlx_window;

	mlx_connection = mlx_init();
	if (NULL == mlx_connection)
		return (MALLOC_ERROR);

	mlx_window = mlx_new_window(mlx_connection,
								HEIGHT,
								WIDTH,
								"My window");
	if (NULL == mlx_window)
    {
        mlx_destroy_display(mlx_connection); // Cleanup MLX connection
        free(mlx_connection);
        return (MALLOC_ERROR);
    }

	mlx_loop(mlx_connection);

	mlx_destroy_window(mlx_connection, mlx_window);
	mlx_destroy_display(mlx_connection);
	free(mlx_connection);
}