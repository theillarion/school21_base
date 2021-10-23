SRCS		=	${wildcard srcs/*.c}
OBJS		=	${SRCS:.c=.o}
INCL		=	-I includes
HEADER		=	libftprintf.h
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
LIB			=	ar
LIB_FLAGS	=	rc
RM			=	rm -rf
NAME		=	libftprintf.a

.c.o		:	${HEADER}
			$(CC) ${FLAGS} ${INCL} ${SRCS}

all			:	${NAME}

${NAME}		:	${HEADER} ${OBJS}
			${LIB} ${LIB_FLAGS} ${NAME} $< -o ${<:.c=.o}

clean		:	${RM} ${OBJS}

fclean		:	clean ${RM}	${NAME}

re			:	fclean ${NAME}

.PHONY		:	all clean fclean re