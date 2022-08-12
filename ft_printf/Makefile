# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 01:07:04 by btekinli          #+#    #+#              #
#    Updated: 2022/07/05 10:40:32 by btekinli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= libftprintf.a

CC                      = gcc

SRCS					= ft_printf.c ft_process.c

OBJS					= $(SRCS:.c=.o)

FLAGS					= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(FLAGS) -c $(SRCS) -I./
				ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
