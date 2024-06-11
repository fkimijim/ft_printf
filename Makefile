NAME		=	libftprintf.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
SRC			=	srcs/print_c.c\
				srcs/print_s.c\
				srcs/print_p.c\
				srcs/print_d.c\
				srcs/print_u.c\
				srcs/print_small_x.c\
				srcs/print_large_x.c\
				srcs/print_percent.c\
				srcs/ft_printf.c\
				# main.c

SRCS = $(SRC)

OBJS		= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I include -c $< -o $@

all: $(NAME)

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
