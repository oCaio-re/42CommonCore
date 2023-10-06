CFLAGS = -Wall -Wextra -Werror

all: all_tests

test: all_tests
	./all_tests

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
						  ft_strlcpy.c\
						  ft_strlcat.c\
						  ft_toupper.c \
						  ft_tolower.c \
						  ft_strncmp.c \
						  ft_memchr.c\
						  ft_memcmp.c\
						  ft_atoi.c \
						  ft_strdup.c \
						  ft_calloc.c \

MOD_OBJECTS = $(MOD_SOURCES:.c=.o)

libft.a: $(MOD_OBJECTS)
	ar -r libft.a $(MOD_OBJECTS)

clean:
	rm -fv *.o *.a all_tests

all_tests: libft.a all_tests.o
	$(CC) -o all_tests -L. -lft all_tests.o $(MOD_OBJECTS)
	