/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:02:39 by terjimen          #+#    #+#             */
/*   Updated: 2024/10/15 16:04:43 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    void    *mlx_ptr;

    mlx_ptr = mlx_init();
    if (NULL == mlx_ptr)
        return (1);

    mlx_destroy_display(mlx_ptr);
    free(mlx_ptr);
}