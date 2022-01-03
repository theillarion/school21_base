NAME_SERVER		=	server
NAME_CLIENT		=	client
NAME_LIB		=	ft
PATH_LIB		=	lib/libft
CC 				=	gcc
CC_FLAGS		=	-Wall -Werror -Wextra
SRCS_SERVER		=	${shell find srcs/server -name "*.c" }
SRCS_CLIENT		=	${shell find srcs/client -name "*.c" }
OBJS_SERVER		=	${SRCS_SERVER:.c=.0}
OBJS_CLIENT		=	${SRCS_CLIENT:.c=.0}	
INCLUDES		=	-I includes
RM				=	rm -rf

.c.o			:	
					$(CC) $(CC_FLAGS) $(INCLUDES) -c $< -o $(<:.c=.0)

all				:	$(NAME_SERVER) $(NAME_SERVER)

$(NAME_SERVER)	:	$(NAME_LIB) $(OBJS_SERVER)
					$(CC) $(CC_FLAGS) $(OBJS_SERVER) -L$(PATH_LIB) -l$(LIBNAME) -o $(NAME_SERVER)

$(NAME_CLIENT)	:	$(NAME_LIB) $(OBJS_CLIENT)
					$(CC) $(CC_FLAGS) $(OBJS_CLIENT) -L$(PATH_LIB) -l$(LIBNAME) -o $(NAME_CLIENT)

$(NAME_LIB)		:	
					$(MAKE) -C $(PATH_LIB)

clean			:
					$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)

fclean			:	clean 
					$(RM) $(NAME_SERVER) $(NAME_CLIENT) $(NAME_LIB)

re				:	fclean all

.PHONY			:	all clean fclean re