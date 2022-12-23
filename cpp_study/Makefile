# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoyoo <seoyoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 03:16:26 by seoyoo            #+#    #+#              #
#    Updated: 2022/12/16 22:11:01 by seoyoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# color setting
Color_Off = \033[0m		# Text Reset
Black = \033[0;30m		# Black
Red = \033[0;31m		# Red
Green = \033[0;32m		# Green
Yellow = \033[0;33m		# Yellow
Blue = \033[0;34m		# Blue
Purple = \033[0;35m		# Purple
Cyan = \033[0;36m		# Cyan
White = \033[0;37m		# White

# target
NAME = a.out

# compiler
GCC = g++

SRCS = cpp_study_7.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	$(GCC) -o $@ $^

clean :
	rm $(NAME)

run : all
	@./$(NAME)

re : clean all run

.PONEY : all clean run
