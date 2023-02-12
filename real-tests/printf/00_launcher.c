/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:36:21 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_test.h"
#include "libunit.h"
#include "libft.h"

int	printf_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Print string", &print_forty_two);
	load_test(&testlist, "Print number", &print_42_test);
	return (launch_test("fr_printf", testlist));
}
