NAME=libft.a
FLAGS=-Wall -Wextra -Werror
CC=clang
SOURCE=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_strdup.c ft_calloc.c

OBJ	=	$(SOURCE:.c=.o)
SO_BONUS=
BO_OBJ	=	$(SO_BONUS:.c=.o)

all: $(NAME)

$(NAME):$(OBJ) $(BO_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BO_OBJ)

$(OBJ):$(SOURCE)
	$(CC) $(FLAGS) -c -I . $(SOURCE)

bonus: $(BO_OBJ)
	$(CC) $(FLAGS) -c -I $(SO_BONUS)

clean:
	rm -f $(OBJ) $(BO_OBJ)
fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re copy bonus rebonus
