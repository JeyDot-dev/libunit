/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 18:53:57 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "samples.h"
#include "libft.h"
int	samples_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Test Ok", &ok_test);
	load_test(&testlist, "Failed Test", &failed_test);
	load_test(&testlist, "Bus Error", &bus_error_test);
	load_test(&testlist, "Seg Fault", &segfault_test);
	ft_printf("Sample Test Results\n");
	launch_test("SAMPLES", testlist);
	return (1);
	// return (launch_tests(&testlist));
}
