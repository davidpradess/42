LIB = ar -rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c\
ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c\
ft_tolower.c ft_toupper.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c\

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

#BONUSSRC =

#BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

#bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c Makefile libft.h
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) #$(BONUSOBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
#rebonus: fclean bonus\
