/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:26:22 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 14:17:12 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_unit_test {

	struct s_unit_test	*next;
	char				*t_name;
	int					(*fn)(void);

}	t_unit_test;

void	load_test(t_unit_test **head, char *t_name, int (*fn)(void));
void	delete_list(t_unit_test **head);

#endif