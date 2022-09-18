/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcatmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:42:55 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/05 10:02:34 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#define PITUUS 20

int	main(void)
{
	char	desti[PITUUS] = "Testi ";
	char	source[PITUUS] = "toimii?";

	printf("DST = %s\n", desti);
	printf("SRC = %s\n", source);
	ft_strlcat(desti, source, 15);
	printf("%s", desti);
	return (0);
}
