NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

LIBCC = ar rc
SRCDIR = srcs
INCDIR = includes

SRCS = ${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_strcmp.c ${SRCDIR}/ft_strlen.c ${SRCDIR}/ft_swap.c
OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		${LIBCC} ${NAME} ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean 

