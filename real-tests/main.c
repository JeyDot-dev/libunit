/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:47:00 by srapopor          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/12 16:33:05 by srapopor         ###   ########.fr       */
=======
/*   Updated: 2023/02/12 16:07:53 by jsousa-a         ###   ########.fr       */
>>>>>>> e8a9c3906081ba26e0d2ff8224cdd571f9bd0456
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
