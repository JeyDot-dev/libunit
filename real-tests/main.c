/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:47:00 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 15:53:38 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "libunit.h"
#include "tests.h"


int	main(void)
{
	int	routine_response;

	routine_response = 0;
	if (strlen_launcher() == -1)
		routine_response = -1;
	return (routine_response);
}
