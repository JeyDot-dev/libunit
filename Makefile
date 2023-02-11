NAME = libunit.a

SRCS_PATH =./

OBJS_PATH = ./objects

SRCS_NAME = main.c


SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))


HEADER_DIR = ./

FLAG = -Wall -Wextra -Werror -I$(HEADER_DIR)

CC = GCC $(FLAG)

OBJS = ${SRCS:.c=.o}

%.o:%.c
	$(CC) -o $@ -c $<

${NAME} : ${OBJS}
	make -s -C libft
	cp libft/libft.a ./$(NAME)
	#ar rcs $(NAME) $(OBJS)
	 $(CC)   $(OBJS) -L. -lunit

all : ${NAME}

clean :
	rm -f ${OBJS} $(OBJS_BONUS)
	$(MAKE) -C libft clean

fclean : clean
	rm -f ${NAME}
	$(MAKE) -C libft fclean

re : fclean all

test:
	make -C libft
	cp libft/libft.a ./$(NAME)
	# ar rcs $(NAME) $(OBJS)
	$(CC)   $(OBJS) -L. -l libunit

.PHONY : all clean fclean re