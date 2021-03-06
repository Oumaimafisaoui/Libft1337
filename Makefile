NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror
CC	=	clang

SOURCE	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c

OBJ	=	$(SOURCE:.c=.o)

SO_BONUS=	ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
			ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BO_OBJ	=	$(SO_BONUS:.c=.o)


all:$(NAME)


$(NAME):$(OBJ) $(BO_OBJ)
	ar -rcs $(NAME)	$(OBJ) $(BO_OBJ)

$(OBJ):	$(SOURCE)
	$(CC) $(FLAGS) -c -I .	$(SOURCE)

bonus:	$(BO_OBJ)
	$(CC) $(FLAGS) -c -I . $(SO_BONUS)


clean:
	rm -f $(OBJ) $(BO_OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

bo_r:	fclean bonus

#main: main.c $(NAME)$(CC) $(FLAGS) main.c $(NAME) -o main ./main

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SOURCE)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
.PHONY: all clean fclean re copy bonus bo_r

