/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdelmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:47:26 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/14 16:31:40 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*muisti;

	muisti = (char *)malloc(sizeof(char));
	printf("Ekaks: %p\n", muisti);
	ft_strdel(&muisti);
	printf("Lopuks: %p", muisti);
	return (0);
}
