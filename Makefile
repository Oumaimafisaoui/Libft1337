NAME	=	libft.a
FLAGS = -Wall	-Wextra	-Werror
CC	=	clang
SOURCE	=	ft_bzero.c    ft_isalpha.c  ft_isdigit.c  ft_memcpy.c   ft_memmove.c  ft_tolower.c ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memeset.c  ft_strlen.c   ft_toupper.c 
		
OBJ	=	$(SOURCE:.c=.o)
SO_BONUS	=	
BO_OBJ	=	$(SO_BONUS:.c=.o)

all: $(NAME)

$(NAME):$(OBJ) $(BO_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BO_OBJ)

$(OBJ):$(SOURCE)
	$(CC) $(FLAGS) -c -I . $(SOURCE)

bonus:
	$(CC) $(FLAGS) - c $(SO_BONUS)
	ar -rcs $(NAME) $(BO_OBJ)

clean:
	rm -f $(OBJ) $(BO_OBJ)
fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re copy bonus rebonus
