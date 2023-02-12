NAME 			=	real_tests

SRCS_STRLEN		= 	00_launcher				01_basic_test			02_null_test\
					03_bigger_str_test		04_multiple_zero_test	05_one_character_test

SRCS_STRDUP		=	00_launcher				01_basic_test			02_null_test\
					03_one_char_test		04_long_str_test		05_empty_str_test

SRCS_ATOI		=	00_launcher				01_42_test				02_zero_test\
                    03_max_int_test			04_min_int_test			05_single_digit_test\
					06_start_plus_test		07_start_minus_test		08_alternate_signs_test\
					09_nu_sign_nu_test		10_letters_number_test	11_nu_spaces_nu_test\
					12_start_spaces_test	13_only_spaces_test

SRCS_PRINTF		=  00_launcher 				01_print_string			02_print_number

PATH_STRLEN		=	strlen/
PATH_STRDUP		=	strdup/
PATH_ATOI		=	atoi/
PATH_PRINTF		=	printf/

ALLSRCS 		= 	${addprefix ${PATH_STRLEN},${SRCS_STRLEN}}
ALLSRCS 		+= 	${addprefix ${PATH_STRDUP},${SRCS_STRDUP}}
ALLSRCS 		+= 	${addprefix ${PATH_ATOI},${SRCS_ATOI}}
ALLSRCS 		+= 	${addprefix ${PATH_PRINTF},${SRCS_PRINTF}}

SRCS 		= ${addsuffix .c,${ALLSRCS}} main.c

DIRLIBFT = "../libft"
DIRLIBUNIT = "../framework"

HEADERS_DIR	= ${DIRLIBFT} ${DIRLIBUNIT}

INCLUDES	= ${addprefix -I,${HEADERS_DIR}}

FLAG = -Wall -Wextra -Werror

CC = GCC $(FLAG)

OBJS = ${SRCS:.c=.o}

all : ${NAME}

%.o:%.c
	$(CC) $(INCLUDES) -o $@ -c $<

buildlibs :
			make -s -C ${DIRLIBUNIT}
			make -s -C ${DIRLIBFT}

${NAME} : ${OBJS} buildlibs
		$(CC)    $(OBJS) -o ${NAME} -L$(DIRLIBUNIT) -lunit



clean :
	rm -f ${OBJS} $(OBJS_BONUS)
	$(MAKE) -C ${DIRLIBFT} clean
	$(MAKE) -C ${DIRLIBUNIT} clean

fclean : clean
	rm -f ${NAME}
	rm -f test.log
	$(MAKE) -C ${DIRLIBFT} fclean
	$(MAKE) -C ${DIRLIBUNIT} fclean

test : ${NAME}
		./${NAME} > test.log
		cat test.log

re : fclean all

.PHONY : all clean fclean re
