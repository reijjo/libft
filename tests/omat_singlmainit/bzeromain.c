/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzeromain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:03:46 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/15 10:43:02 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	lause[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Eka: %s, ptr %p\n", lause, lause);
	ft_bzero(lause, 5);
	printf("Lopuks: %s, ptr %p",lause, lause);
	return (0);
}
