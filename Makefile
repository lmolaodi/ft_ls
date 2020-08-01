# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/11 11:15:35 by lmolaodi          #+#    #+#              #
#    Updated: 2019/06/27 14:18:00 by lmolaodi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
SRC = ft_copypath.c ft_free_list.c ft_get_time.c ft_insert_list.c ft_ls.c \
      ft_ls_l.c ft_ls_R.c ft_print_l_flag.c ft_print_ls.c ft_readdir.c \
      ft_R_path.c ft_sort_list.c get_arg.c list_compare_back.c list_compare.c \
      main.c permissions.c rev_list.c ft_ls_lR.c

OBJ = ft_copypath.o ft_free_list.o ft_get_time.o ft_insert_list.o ft_ls.o \
      ft_ls_l.o ft_ls_R.o ft_print_l_flag.o ft_print_ls.o ft_readdir.o \
      ft_R_path.o ft_sort_list.o get_arg.o list_compare_back.o list_compare.o \
      main.o permissions.o rev_list.o ft_ls_lR.o
HEADER = ft_ls.h

NORM = -Wall -Werror -Wextra

CC = gcc

all:
	make -C libft/
	$(CC) -g -I libft -c $(SRC) main.c
	$(CC) -o $(NAME) $(OBJ) -I libft -L libft -lft
valgrind: all
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-fds=yes --track-origins=yes --show-reachable=yes --verbose --gen-suppressions=all --log-file=valgrind-out.txt ./ft_ls
clean:
	make -C libft/ clean
	rm -f $(OBJ) main.o
fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME) valgrind-out.txt
re: fclean all
