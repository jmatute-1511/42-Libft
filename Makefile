# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 12:21:57 by jmatute-          #+#    #+#              #
#    Updated: 2021/05/30 20:22:42 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlcat.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strdup.c  ft_strjoin.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_strrchr.c \
ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_split.c

SRCS_B	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:		${OBJS_B}
			ar rc ${NAME} ${OBJS_B}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME} ${OBJS_B}

re:			fclean all

.PHONY:		all clean fclean re
