/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapimain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:30:14 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/16 14:32:38 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(unsigned int i, char c)
{
	char	str;

	i = 5;
	str = c + 1 + i;
	return (str);
}

int	main(void)
{
	char	lause[] = "ABCDEFGHIJKLMNOPQRST";

	printf("Ekaks: 	%s\n", lause);
	printf("Lopuks: %s\n", ft_strmapi(lause, *f));
	return (0);
}
