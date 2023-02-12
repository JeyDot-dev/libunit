/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_long_str_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:41 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 16:20:48 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	long_str_test(void)
{
	char *test;
	int	result;
	static char *blob = "But I must explain to you how all this mistaken idea of \
		   	denouncing pleasure and praising pain was born and I will give you \
		   	a complete account of the system, and expound the actual  \
			teachings of the great explorer of the truth, the master-builder \
		   	of human happiness. No one rejects, dislikes, or avoids pleasure  \
			itself, because it is pleasure, but because those who do not know \
		   	how to pursue pleasure rationally encounter consequences that are  \
			extremely painful. Nor again is there anyone who loves or pursues \
		   	or desires to obtain pain of itself, because it is pain, but \
		   	because occasionally circumstances occur in which toil and pain \
		   	can procure him some great pleasure. To take a trivial example, \
		   	which of us ever undertakes laborious physical exercise, except \
		   	to obtain some advantage from it?";

	test = strdup(blob);

	result = strncmp(test, blob, 4092);
	if (test)
		free(test);
	if (result == 0)
		return (0);
	else
		return (-1);
}
