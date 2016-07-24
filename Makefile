#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 04:48:39 by wzafati           #+#    #+#              #
#    Updated: 2016/07/18 14:35:10 by wzafati          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

EXE			=	.exe
NAME		=	my_eval_expr$(EXE)
INCLUDES	=	./
SRCS		=	$(wildcard *.c)
OBJS		=	$(SRCS:.c=.o)
CFLAGS		=	-W -Wall -Werror -Wextra -pedantic -ansi
CC			=	gcc
RM			=	which
RM			=	rm -f
CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete
OBJ_CLEAN	=	@find . -name "*.o" -delete

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(OBJS)

re			:	fclean all

all			:	$(NAME)

$(OBJS)		:
				$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRCS)

clean		:
				$(RM) $(OBJS)
				$(CLEAN)

fclean		:	clean
				$(RM) $(NAME)
