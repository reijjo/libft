/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnewmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:24:24 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/15 10:36:07 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause;

	lause = "AIVAN PIHAL";
	printf("Aluks = %s\n", lause);
	printf("Lopuks = %s", ft_strnew(sizeof(lause)));
	return (0);
}
