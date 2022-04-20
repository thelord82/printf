# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malord <malord@student.42quebec.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 11:19:25 by malord            #+#    #+#              #
#    Updated: 2022/04/20 13:04:06 by malord           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

SRCS		=	ft_printf.c

BSRCS		=	

OBJS		= 	${SRCS:.c=.o}
BOBJS		=	${BSRCS:.c=.o}

# Targets

all: 			$(NAME)

$(NAME): $(OBJS)
				ar -crs $(NAME) $(OBJS)

# Removes objects
clean:
				$(RM) $(OBJS) $(BOBJS)

# Removes objects and executable
fclean: 		clean
				$(RM) $(NAME)

# Removes objects and executable then remakes all
re: 			fclean all

# Bonus points
bonus: 			$(NAME) $(BOBJS)
				ar -crs $(NAME) $(BOBJS)
				