# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/22 11:40:24 by albbermu          #+#    #+#              #
#    Updated: 2025/08/22 11:40:24 by albbermu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = More_useful_fixed_point_number_class
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98  -pedantic

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all