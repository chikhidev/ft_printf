/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   etc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:07:50 by abchikhi          #+#    #+#             */
/*   Updated: 2023/11/20 02:07:52 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_strlen2(char *ptr)
{
	int	counter;

	if (ptr == NULL)
		return (0);
	counter = 0;
	while (*(ptr + counter))
		counter++;
	return (counter);
}
