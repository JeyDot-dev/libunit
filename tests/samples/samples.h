/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   samples.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:45:53 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 14:25:38 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLES_H
# define SAMPLES_H

# include "libunit.h"

int	samples_launcher(void);
int	ok_test(void);
int	failed_test(void);
int	bus_error_test(void);
int	segfault_test(void);
int	timeout_test(void);

#endif