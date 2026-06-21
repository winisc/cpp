# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wini <wini@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 01:28:20 by wini              #+#    #+#              #
#    Updated: 2026/06/21 02:10:06 by wini             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= attacks

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS	= $(SRCS:.cpp=.o)
HDRS	= HumanA.hpp HumanB.hpp Weapon.hpp

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
