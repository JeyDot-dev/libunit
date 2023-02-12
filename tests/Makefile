NAME 		= samples_test


OBJS_PATH 	= ./objects

SRCS_SAMPLES = 	00_launcher				01_ok_test		02_failed_test\
				03_bus_error_test		04_segfault_test 05_timeout_test

ALLSRCS 	= ${addprefix samples/,${SRCS_SAMPLES}}

SRCS_NAME	= ${addsuffix .c,${ALLSRCS}}

SRCS 		= ${SRCS_NAME} main.c

DIRLIBFT = "../libft"
DIRLIBUNIT = "../framework"

LIBFTDIR 	= ../libft

HEADERS_DIR	= ../framework	../libft ./

INCLUDES	= ${addprefix -I,${HEADERS_DIR}}


FLAG = -Wall -Wextra -Werror

CC = GCC $(FLAG)

OBJS = ${SRCS:.c=.o}

%.o:%.c
	$(CC) $(INCLUDES) -o $@ -c $<

${NAME} : ${OBJS}
	make -s -C ../framework
	make -s -C ../libft
	# ar rcs $(NAME) $(OBJS)
	# ranlib ${NAME}
	$(CC)    $(OBJS) -o ${NAME} -L$(DIRLIBUNIT) -lunit

all : ${NAME}

clean :
	rm -f ${OBJS} $(OBJS_BONUS)
#	$(MAKE) -C ../libft clean

fclean : clean
	rm -f ${NAME}
#	$(MAKE) -C ../libft fclean

test : ${NAME}
	./${NAME}

re : fclean all

.PHONY : all clean fclean re
