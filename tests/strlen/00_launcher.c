/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:24:04 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 12:26:11 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"

#include "libunit.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

load_test(&testlist, "Basic test", &basic_test);
load_test(&testlist, "NULL test", &null_test);
//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
return(launch_tests(&testlist));
}
