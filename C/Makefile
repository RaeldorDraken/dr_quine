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

SRC_COLLEEN = Colleen.c
SRC_GRACE   = Grace.c
SRC_SULLY   = Sully.c

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

	# Run all
run: run_colleen run_grace run_sully

# Individual runs
run_colleen: $(NAME_COLLEEN)
	@echo "=== Running Colleen ==="
	./$(NAME_COLLEEN)

run_grace: $(NAME_GRACE)
	@echo "=== Running Grace ==="
	./$(NAME_GRACE)

run_sully: $(NAME_SULLY)
	@echo "=== Running Sully ==="
	./$(NAME_SULLY)

clean:
	@echo "Cleaning generated source files and executables..."
	@rm -f Grace_kid.c
	@rm -f Sully_*.c Sully_[0-9] Sully_[0-9][0-9]

fclean: clean
	@echo "Cleaning compiled binaries..."
	@rm -f $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

re: fclean all

.PHONY: all clean fclean re run run_colleen run_grace run_sully