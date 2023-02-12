NAME 			=		 real_tests

SRCS_STRLEN		= 	00_launcher				01_basics_test			02_null_test\
					03_bigger_str_test		04_multiple_zero_test	05_one_character_test
#SRCS_STRDUP		=	00_launcher				01_basic_test			02_null_test\
#					03_one_character_test	04_long_string_test		
#
#STCS_ATOI		=	00_launcher				01_42_test				02_zero_test\
#                    03_max_int_test			04_min_int_test			05_single_digit_test\
#					06_start_plus_test		07_start_minus_test		08_alternate_signs_test\
#					09_nu_sign_nu_test		10_letters_numbers_test	11_nu_spaces_nu_test\
#					12_start_spaces_test	13_only_spaces_test
					
PATH_STRLEN		=	strlen/
#PATH_STRDUP		=	strdup/
#PATH_ATOI		=	atoi/

ALLSRCS 		= 	${addprefix ${PATH_STRLEN},${SRCS_STRLEN}}
#ALLSRCS 		+= 	${addprefix ${PATH_STRDUP},${SRCS_STRDUP}}
#ALLSRCS 		+= 	${addprefix ${PATH_ATOI},${SRCS_ATOI}}

SRCS_NAME	= ${addsuffix .c,${ALLSRCS}}

SRCS 		= ${addsuffix .c,${ALLSRCS}} main.c

DIRLIBFT = "../libft"
DIRLIBUNIT = "../framework"

LIBFTDIR 	= ../libft

HEADERS_DIR	= ../framework	../libft ./

INCLUDES	= ${addprefix -I,${HEADERS_DIR}}


FLAG = -Wall -Wextra -Werror -g -fsanitize=address

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
