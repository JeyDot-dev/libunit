/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 14:27:19 by srapopor         ###   ########.fr       */
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
	load_test(&testlist, "Timeout Test", &timeout_test);
	ft_printf("Sample Test Results\n");
	return (launch_test("SAMPLES", testlist));
}
