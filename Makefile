# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 12:20:28 by brolivei          #+#    #+#              #
#    Updated: 2023/04/27 13:35:32 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc	= cc
CCFLAGS = -Wall -Wextra -Werror -g

FT_PRINTF = ft_printf/ft_printf.a
PUSH_SWAP = push_swap

SRCS_PUSH_SWAP = main.c ft_split.c ft_atoi.c list_functions.c check_input.c utils.c list_insert_beginning.c ft_atoi_check.c simple_life.c\
					sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c push_swap.c deallocate.c two_element.c three_element.c\
					four_element.c five_element.c

OBJS_PUSH_SWAP	= $(SRCS_PUSH_SWAP:.c=.o)

all: $(FT_PRINTF) $(PUSH_SWAP)

$(FT_PRINTF):
					$(MAKE) -C ./ft_printf
$(PUSH_SWAP): $(OBJS_PUSH_SWAP)
					$(CC) $(CCFLAGS) $(OBJS_PUSH_SWAP) ft_printf/libftprintf.a -o $(PUSH_SWAP)

%.o: %.c
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_PUSH_SWAP)
		$(MAKE) clean -C ./ft_printf

fclean: clean
				$(MAKE) fclean -C ./ft_printf
				rm -rf $(PUSH_SWAP)

re: fclean all
