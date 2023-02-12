/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 15:26:33 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_test.h"
#include "libunit.h"
#include "libft.h"
int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "42 test", &forty_two_test);
	load_test(&testlist, "Zero test", &zero_test);
	load_test(&testlist, "Max int test", &max_int_test);
	load_test(&testlist, "Min int test", &min_int_test);
	load_test(&testlist, "Single digit test", &single_digit_test);
	load_test(&testlist, "'+' number test", &start_plus_test);
	load_test(&testlist, "'-' number test", &start_minus_test);
	load_test(&testlist, "Alternate signs test", &alternate_signs_test);
	load_test(&testlist, "\"Number+sign+number\" test", &nu_sign_nu_test);
	load_test(&testlist, "\"Chars+number\" test", &letters_numbers_test);
	load_test(&testlist, "\"Number+isspace+Number\" test", &nu_spaces_nu_test);
	load_test(&testlist, "Isspace before number test", &start_spaces_test);
	load_test(&testlist, "Isspace only test", &only_spaces_test);
	return (launch_test("atoi", testlist));
}
