NAME 		= libtests.a


OBJS_PATH 	= ./objects

SRCS_STRLEN = 	00_launcher				01_basics_test			02_null_test\
				03_bigger_str_test		04_multiple_zero_test\
				05_one_character_test

ALLSRCS 	= ${addprefix strlen/,${SRCS_STRLEN}}

SRCS_NAME	= ${addsuffix .c,${ALLSRCS}}

SRCS 		= ${SRCS_NAME}

LIBFTDIR 	= ../libft

HEADERS_DIR	= ../libunit	../libft

INCLUDES	= ${addprefix -I,${HEADERS_DIR}}
HEADER_DIR = ./

FLAG = -Wall -Wextra -Werror ${INCLUDES}

CC = GCC $(FLAG)

OBJS = ${SRCS:.c=.o}

%.o:%.c
	$(CC) -I$(LIBFTDIR) -o $@ -c $<

${NAME} : ${OBJS}
#	make -s -C ../libft
#	cp ../libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)
	ranlib ${NAME}

all : ${NAME}

clean :
	rm -f ${OBJS} $(OBJS_BONUS)
#	$(MAKE) -C ../libft clean

fclean : clean
	rm -f ${NAME}
#	$(MAKE) -C ../libft fclean

re : fclean all

.PHONY : all clean fclean re
