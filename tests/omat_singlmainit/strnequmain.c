/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnequmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:10:07 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/11 15:46:13 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	lause1[] = "HELVETTI";
	char	lause2[] = "HELVuuuu";

	printf("Sama: %d\n", ft_strnequ(lause1, lause2, 2));
	printf("Sama: %d\n", ft_strnequ(lause1, lause2, 4));
	printf("Eri: %d", ft_strnequ(lause1, lause2, 5));
	return (0);
}
