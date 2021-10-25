NAME		=	libftprintf.a
HEADER		=	includes/ft_printf.h
SRCS		=	${wildcard srcs/*.c}
OBJS		=	${SRCS:.c=.o}
INCLUDES	=	-I includes
MAIN_TEST	=	main_test.c
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
LIB			=	ar
LIB_FLAGS	=	rc
RANLIB		=	ranlib ${NAME}
RM			=	rm -rf

.c.o		:
			$(CC) ${FLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

all			:	${NAME}

${NAME}		:	${HEADER} ${OBJS}
			${LIB} ${LIB_FLAGS} ${NAME} ${OBJS}
			${RANLIB}

test		:	${HEADER} ${NAME}
			@${CC} ${FLAGS} ${INCLUDES} ${MAIN_TEST} -L. -lftprintf -o ./main_test && ./main_test

clean		:	
			${RM} ${OBJS}

fclean		:	clean 
			${RM} ${NAME}

re			:	fclean all

.PHONY		:	all clean fclean re test