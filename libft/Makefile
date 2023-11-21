# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 21:56:01 by yessemna          #+#    #+#              #
#    Updated: 2023/11/18 02:54:38 by yessemna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRCA = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
        ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
        ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
        ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_substr.c ft_calloc.c ft_strjoin.c \
        ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
        ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlcat.c ft_strlcpy.c
        
SRCB = ft_lstnew_bonus.c  ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c
        
OBJA = $(SRCA:.c=.o) 
OBJB = $(SRCB:.c=.o)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -I. -o $@ -c $<

all: $(NAME)

bonus: all $(OBJB)
	ar rc $(NAME) $(OBJB)

$(NAME): $(OBJA)
	ar rc $(NAME) $(OBJA)
clean:
	$(RM) $(OBJA)
	$(RM) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean bonus

.PHONY: all bonus clean fclean re
 