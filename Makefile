NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -c

RM = rm -f

LIB = ./libft/libft.a

SRCS = push_swap.c ft_atoi_hamza.c ft_checker.c pop.c push.c ft_lstsize.c parsing.c\
	   p_moves.c s_moves.c r_moves.c rr_moves.c Small_and_Big.c ft_Quick.c\
	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) push_swap.h
	cc $(CFLAGS) $(SRCS)
	cc $(OBJS) $(LIB) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
