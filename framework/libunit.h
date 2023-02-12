/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:26:22 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 11:27:16 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>

# define RESET	"\033[0m"
# define BLACK	"\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

typedef struct s_unit_test {
	struct s_unit_test	*next;
	char				*t_name;
	int					(*fn)(void);

}	t_unit_test;

void	load_test(t_unit_test **head, char *t_name, int (*fn)(void));
void	delete_list(t_unit_test **head);
void	print_list(t_unit_test *head);
int		launch_test(char *title, t_unit_test *head);
int		execute_test(char *title, t_unit_test test, int *total, int *passed);

#endif
