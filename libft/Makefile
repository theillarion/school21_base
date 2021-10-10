HEADER			=	libft.h
COMMON_SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS_SRCS		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
COMMON_OBJS		=	${COMMON_SRCS:.c=.o}
BONUS_OBJS		=	${BONUS_SRCS:.c=.o}
INCLUDES		=	-I.
NAME			=	libft
COMPILER		=	gcc
FLAGS_COMP		=	-Wall -Werror -Wextra
FLAGS_LINUX		=	-shared -fPIC
LIB				=	ar
EXT_LIB_MAC		=	.a
EXT_LIB_LINUX	=	.so
FLAGS_LIB		=	rc
RANLIB			=	ranlib
RM				=	rm -rf

.c.o	:	${HEADER}
		${COMPILER} ${FLAGS_COMP} ${INCLUDES} -c $< -o ${<:.c=.o}

all		:	${NAME}

${NAME} :	${COMMON_OBJS} ${HEADER}
		${LIB} ${FLAGS_LIB} ${NAME}${EXT_LIB_MAC} ${COMMON_OBJS}
		${RUNLIB}

bonus	:	${COMMON_OBJS} ${BONUS_OBJS} ${HEADER}
		${LIB} ${FLAGS_LIB} ${NAME}${EXT_LIB_MAC} ${COMMON_OBJS} ${BONUS_OBJS}
		${RANLIB} ${NAME}${EXT_LIB_MAC}
so		:	
		${COMPILER} ${FLAGS_LINUX} -o ${NAME}${EXT_LIB_LINUX} ${INCLUDES} ${COMMON_SRCS}

clean	:
		${RM} ${COMMON_OBJS} ${BONUS_OBJS}
	
fclean	:	clean
		${RM} ${NAME} ${NAME}${EXT_LIB_MAC} ${NAME}${EXT_LIB_LINUX}

re		:	fclean ${NAME}

.PHONY	:	all clean fclean re
