# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malord <malord@student.42quebec.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 11:19:25 by malord            #+#    #+#              #
#    Updated: 2022/04/29 13:01:42 by malord           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

SRCS		=	ft_checkchar.c		\
				ft_numlen.c			\
				ft_printf.c			\
				ft_printhexa.c		\
				ft_printptr.c		\
				ft_printunsigned.c	\
				ft_putchar.c		\
				ft_putnbr.c			\
				ft_putstr.c			\
				ft_strlen.c			

BSRCS		=	

OBJS		= 	${SRCS:.c=.o}
BOBJS		=	${BSRCS:.c=.o}

# Targets

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

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

.PHONY:			all clean fclean re bonus
				