# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 10:00:00 by eros-gir          #+#    #+#              #
#    Updated: 2025/05/29 11:13:47 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Sully
SRC     = sully.c
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

run: all
	./$(NAME)

clean:
	$(RM) sully_[0-9]*.c
	$(RM) Sully_[0-9]*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all run clean fclean re
