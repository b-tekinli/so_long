# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 12:31:52 by btekinli          #+#    #+#              #
#    Updated: 2022/01/19 10:40:32 by btekinli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c\
					ft_bzero.c ft_calloc.c ft_memchr.c \
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_atoi.c ft_itoa.c \
					ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
					ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
					ft_strlcpy.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_strtrim.c ft_substr.c ft_strlen.c

OBJS			= $(SRCS:.c=.o)

CC				= @gcc

RM				= @rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@echo ➤ arşivleme işlemi başlatılıyor...

bonus:			$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@echo ➤ b. arşivleme işlemi başlatılıyor...

clean:
				$(RM) $(OBJS)
				@echo ➤ nesne dosyalar siliniyor...

fclean:			clean
				$(RM) $(NAME)
				@echo ➤ hepsi siliniyor...

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
