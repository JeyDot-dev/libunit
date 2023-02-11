/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:37:27 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 18:26:49 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "samples.h"

int	bus_error_test(void)
{
	static char	*name = "hello";

	name[3] = 'x';
	if (1)
		return (0);
	else
		return (-1);
}
