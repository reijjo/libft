/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:11:28 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/16 14:33:07 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(char c)
{
	char	uus;

	uus = c + 1;
	return (uus);
}

int	main(void)
{
	char	lause[] = "SDQUD";

	printf("Lause = %s, osote = %p\n", lause, lause);
	printf("Uus = 	%s, osote = %p", ft_strmap(lause, f), lause);
	return (0);
}
