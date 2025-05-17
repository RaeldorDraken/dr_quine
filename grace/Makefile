# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/17 14:45:41 by eros-gir          #+#    #+#              #
#    Updated: 2025/05/17 14:50:15 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Grace
KID_NAME    = Grace_kid

SRC         = grace.c

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

RM          = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

# Compilar grace_kid.c -> Grace_kid
kid: grace_kid.c
	$(CC) $(CFLAGS) -o $(KID_NAME) grace_kid.c

clean:
	@echo "Nothing to clean (no .o files)"

fclean:
	$(RM) $(NAME)
	$(RM) $(KID_NAME)
	$(RM) grace_kid.c

re: fclean all

.PHONY: all clean fclean re kid
