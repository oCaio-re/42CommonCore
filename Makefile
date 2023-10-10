
NAME = libft.a

MOD_SOURCES = \
						  ft_isalpha.c \
						  ft_isdigit.c \
						  ft_isalnum.c \
						  ft_isascii.c \
						  ft_isprint.c \
						  ft_strlen.c\
						  ft_memset.c\
						  ft_bzero.c\
						  ft_memcpy.c\
						  ft_memmove.c\
						  ft_strlcpy.c\
						  ft_strlcat.c\
						  ft_toupper.c \
						  ft_tolower.c \
						  ft_strchr.c\
						  ft_strrchr.c\
						  ft_strncmp.c \
						  ft_memchr.c\
						  ft_memcmp.c\
						  ft_strnstr.c \
						  ft_atoi.c \
						  ft_strdup.c \
						  ft_calloc.c \
						  ft_strsub.c \
						  ft_substr.c \

MOD_OBJECTS = $(MOD_SOURCES:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(MOD_SOURCES)
	ar rc $(NAME) $(MOD_OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(MOD_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all