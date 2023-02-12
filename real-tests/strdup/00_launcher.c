/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 15:09:01 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_test.h"
#include "libunit.h"
#include "libft.h"
int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "One char test", &one_char_test);
	load_test(&testlist, "Long str test", &long_str_test);
	load_test(&testlist, "Empty string test", &empty_str_test);
	return (launch_test("strdup", testlist));
}
