

SCRS	= srcs/main.c srcs/converter.c srcs/converter_utils.c srcs/ft_utils.c srcs/parse_file.c srcs/parse_file_utils.c srcs/parse_dict.c srcs/parse_dict_utils.c

OBJS	= ${SCRS:.c=.o}

NAME	= rush-02

.c.o:	${CC} -c $< -o ${<:.c=.o}

CC		= gcc -Wall -Wextra -Werror -I includes

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
