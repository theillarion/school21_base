NAME_SERVER		=	server
NAME_CLIENT		=	client
#NAME_LIB		=	libft.a
#NAME_LIB_SHORT	=	ft
#PATH_LIB		=	lib/libft
CC 				=	gcc
CC_FLAGS		=	-Wall -Werror -Wextra
SRCS_SERVER		=	${shell find srcs/server -name "*.c"}
SRCS_CLIENT		=	${shell find srcs/client -name "*.c"}
SRCS_COMMON		=	$(shell find srcs/common -name "*.c")
OBJS_SERVER		=	${SRCS_SERVER:.c=.o}
OBJS_CLIENT		=	${SRCS_CLIENT:.c=.o}
OBJS_COMMON		=	${SRCS_COMMON:.c=.o}
INCLUDES		=	-I includes
RM				=	rm -rf

.c.o			:	
					$(CC) $(CC_FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

all				:	${NAME_SERVER} ${NAME_CLIENT}

${NAME_SERVER}	:	$(OBJS_SERVER) $(OBJS_COMMON)
					$(CC) $(CC_FLAGS) $(OBJS_SERVER) $(OBJS_COMMON) -o $(NAME_SERVER)

${NAME_CLIENT}	:	$(OBJS_CLIENT) $(OBJS_COMMON)
					$(CC) $(CC_FLAGS) $(OBJS_CLIENT) $(OBJS_COMMON) -o $(NAME_CLIENT)

#${NAME_LIB}		:	
#					@$(MAKE) -C $(PATH_LIB)

clean			:
					$(RM) $(OBJS_SERVER) $(OBJS_CLIENT) $(OBJS_COMMON)

fclean			:	clean 
					$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re				:	fclean all

.PHONY			:	all clean fclean re