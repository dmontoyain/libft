#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/22 20:24:48 by dmontoya          #+#    #+#              #
#    Updated: 2018/03/06 23:17:50 by dmontoya         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FUNCTIONS = toupper \
			tolower \
			isprint \
			isascii \
			isdigit \
			isalpha \
			isalnum \
			strcat \
			strncat \
			atoi \
			wordcount \
			strtohex \
			atoi_base \
			strncmp \
			strcmp \
			strnstr \
			strstr \
			strcpy \
			strlen \
			strncpy \
			strdup \
			strchr \
			strrchr \
			memset \
			bzero \
			memcpy \
			memccpy \
			putchar \
			putstr \
			strnew \
			strclr \
			striter \
			striteri \
			strmap \
			strmapi \
			strequ \
			strnequ \
			strjoin \
			strtrim \
			strsub \
			putendl \
			putnbr \
			itoa \
			memchr \
			memcmp \
			strdel \
			putchar_fd \
			putstr_fd \
			putendl_fd \
			putnbr_fd \
			strsplit \
			memalloc \
			memdel \
			strlcat \
			memmove \
			lstnew \
			lstdelone \
			lstdel	\
			lstadd \
			lstiter \
			lstmap \
			intlen \
			get_next_line \
			doublearray_del \
			wcharlen \
			wcstrlen \
			uitoa_base \
			itoa_base \
			str_touppercase \
			remove_nonascii \
			strnjoin


GREEN = \033[32m
CYAN = \033[36m
NO_COLOR=\033[0m

PREP_STR = $(CYAN)Preparing C LIBFT...$(NO_COLOR)
CLEANO_STR = $(CYAN)Cleaning object files...$(NO_COLOR)
CLEANB_STR = $(CYAN)Cleaning binary files...$(NO_COLOR)
OK_STR = $(GREEN)[OK]$(NO_COLOR)


ADD_FT = $(addprefix ft_, $(FUNCTIONS))
C_FILES = $(addprefix src/, $(addsuffix .c, $(ADD_FT)))
OBJ_FILES = $(addsuffix .o, $(ADD_FT))
O_FILES = $(addprefix obj/, $(OBJ_FILES))
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCL = -I inc/


all: $(NAME)

$(NAME):
	@echo "$(PREP_STR)"
	@$(CC) $(FLAGS) $(INCL) -c $(C_FILES)
	@mkdir -p obj
	@mv $(OBJ_FILES) obj/
	@ar rcs $(NAME) $(O_FILES)
	@echo "Library Complete! $(NAME)...$(OK_STR)"

clean:
	@echo "$(CLEANO_STR)"
	@rm -f $(O_FILES)
	@echo "$(OK_STR)"

fclean:	clean
	@echo "$(CLEANB_STR)"
	@rm -f $(NAME)
	@rm -rf obj/
	@echo "$(OK_STR)"

re: fclean all

