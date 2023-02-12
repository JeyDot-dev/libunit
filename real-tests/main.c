/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:47:00 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:53:08 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "libunit.h"
#include "real_tests.h"

int	main(void)
{
	int	routine_response;

	strdup_launcher();
	routine_response = 0;
	if (strlen_launcher() == -1)
		routine_response = -1;
	if (atoi_launcher() == -1)
		routine_response = -1;
	if (printf_launcher() == -1)
		routine_response = -1;
	return (routine_response);
}
