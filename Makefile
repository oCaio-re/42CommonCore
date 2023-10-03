CFLAGS = -Wall -Wextra -Werror

all: all_tests

test: all_tests
	./all_tests

MOD_SOURCES = \
						  ft_isprint.c \
						  ft_isdigit.c \
						  ft_strlcpy.c \
						  ft_strlen.c \
						  ft_strlcat.c \
						  ft_toupper.c \
						  ft_tolower.c \
						  #mod3.c

MOD_OBJECTS = $(MOD_SOURCES:.c=.o)

libft.a: $(MOD_OBJECTS)
	ar -r libft.a $(MOD_OBJECTS)

clean:
	rm -fv *.o *.a all_tests

all_tests: libft.a all_tests.o
	$(CC) -o all_tests -L. -lft all_tests.o $(MOD_OBJECTS)
