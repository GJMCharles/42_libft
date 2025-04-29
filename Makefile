# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grcharle <grcharle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 11:55:25 by grcharle          #+#    #+#              #
#    Updated: 2025/04/29 18:02:27 by grcharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc

NAME := libft.a

CFLAGS += -Wall -Wextra -Werror

SOURCES := $(shell find . -type f -name 'ft_*.c')
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
INCLUDE := -I./.

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs -o $@ $^

all: $(NAME)

clean:
	@$(RM) -frv $(OBJECTS)

fclean:	clean
	@$(RM) -v $(NAME)

re: fclean all

.PHONY: all clean fclean re
