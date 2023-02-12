NAME = libunit.a

SRCS_PATH =./

OBJS_PATH = ./objects

SRCS_NAME = delete_list.c \
			load_list.c	\
			print_list.c \
			launch_test.c \
			execute_test.c

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))

LIBFTDIR = ../libft

HEADER_DIR = ./

FLAG = -Wall -Wextra -Werror -I$(HEADER_DIR)

CC = GCC $(FLAG)

OBJS = ${SRCS:.c=.o}

%.o:%.c
	$(CC) -I$(LIBFTDIR) -o $@ -c $<

${NAME} : ${OBJS}
	make -s -C ../libft
	cp ../libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)
	#$(CC)   $(OBJS) -L. -lunit

all : ${NAME}

clean :
	rm -f ${OBJS} $(OBJS_BONUS)
	$(MAKE) -C ../libft clean

fclean : clean
	rm -f ${NAME}
	$(MAKE) -C ../libft fclean

re : fclean all

.PHONY : all clean fclean re
