/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_letters_number_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:31:14 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:03:24 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	letters_numbers_test(void)
{
	if (ft_atoi("fortytwo42") == 0)
		return (0);
	else
		return (-1);
}
