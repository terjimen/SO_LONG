# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 19:14:55 by terjimen          #+#    #+#              #
#    Updated: 2024/10/01 20:27:38 by terjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	so_long
CC						=	gcc
CFLAGS					=	-Wall -Wextra -Werror -lm
RM						=	rm -rf

SRCBAZ					=	main error struct_init struct_tiles_init \
						parsing map_init check_map flood_fill elem_pos \
						start_game ft_xpm events_hook tiles move mlx_closing game_end \
						
SRC					=	$(addsuffix .c, $(addprefix sources/, $(SRCBAZ)))

SRCADD					=	$(SRCBAZ) # add extra files

OBJ_DIR					=	obj
OBJ						=	$(SRC:sources/%.c=$(OBJ_DIR)/%.o)

INCLS					=	-I ./includes/

LIBFT 					=	libftprintf/libftprintf.a

MLX						=	mlx/libmlx_Linux.a
MLXFLAGS				=	-L mlx/ -lmlx -lXext -lX11

DEPS					=	$(OBJ:%.o=%.d)

$(OBJ_DIR)/%.o:			sources/%.c
						$(CC) $(CFLAGS) -I libft/sources -I mlx -I sources  -c $< -o $@ $(INCLS)

all:					$(NAME) 

$(NAME):				$(LIBFT) $(OBJ_DIR) $(OBJ)
						$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBINCL) $(MLXFLAGS)

$(LIBFT):
						$(MAKE) -C $(LIBFT) all -s

$(OBJ_DIR):
						mkdir -p $(OBJ_DIR)


-include $(DEPS)


clean:
		$(MAKE) -C $(LIBFT) clean
		$(RM) $(OBJ_DIR)

fclean:	clean
		$(MAKE) -C $(LIBFT_PATH) fclean
		$(RM) $(NAME)

re:	fclean make all

.PHONY:	all clean fclean re
