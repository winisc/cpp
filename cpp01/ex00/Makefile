# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wini <wini@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 01:28:20 by wini              #+#    #+#              #
#    Updated: 2026/06/21 01:44:51 by wini             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS	= $(SRCS:.cpp=.o)
HDRS	= Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
