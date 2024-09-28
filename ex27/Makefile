SRCDIR = srcs
INCDIR = includes
CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = ft_display_file

SRCS = ${SRCDIR}/display_file.c ${SRCDIR}/main.c
OBJS = ${SRCS:.c=.o}

RM = rm -f

all:		${NAME}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re
