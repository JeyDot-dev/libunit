/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 17:43:32 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include "libunit.h"
#include "libft.h"
int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger String Test", &bigger_str_test);
	// load_test(&testlist, "Multiple Zero Test", &multiple_zero_test);
	load_test(&testlist, "One Character Test", &one_character_test);
	print_list(testlist);
	launch_test(testlist);
	ft_printf("Deleting list..\n");
	delete_list(&testlist);
	ft_printf("Printing list..\n");
	print_list(testlist);
	return (1);
	// return (launch_tests(&testlist));
}
