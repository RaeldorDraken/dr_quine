# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 42 Student                                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13                               #+#    #+#              #
#    Updated: 2025/05/13                               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_COLLEEN = Colleen
NAME_GRACE   = Grace
NAME_SULLY   = Sully

SRC_COLLEEN = colleen.c
SRC_GRACE   = grace.c
SRC_SULLY   = sully.c

CFLAGS = -Wall -Wextra -Werror
CC = cc

.PHONY: all clean fclean re

all: $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COLLEEN): $(SRC_COLLEEN)
	$(CC) $(CFLAGS) -o $@ $<

$(NAME_GRACE): $(SRC_GRACE)
	$(CC) $(CFLAGS) -o $@ $<

$(NAME_SULLY): $(SRC_SULLY)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@echo "Cleaning generated source files and executables..."
	@rm -f Grace_kid.c
	@rm -f sully_*.c Sully_[0-9] Sully_[0-9][0-9]

fclean: clean
	@echo "Cleaning compiled binaries..."
	@rm -f $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

re: fclean all

.PHONY: all clean fclean re