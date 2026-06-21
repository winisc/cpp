# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wini <wini@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 01:28:20 by wini              #+#    #+#              #
#    Updated: 2026/06/21 02:53:12 by wini             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_sed

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp replace.cpp tests.cpp
OBJS	= $(SRCS:.cpp=.o)
HDRS	= replace.hpp

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
