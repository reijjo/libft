/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmpmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:11 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 11:55:42 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause1 = "ABC";
	char	*lause2 = "ABR";
	char	*lause3 = "ABA";
	char	*lause4 = "ABZ";
	char	*lause5 = "ABJ";

	printf("eka ja eka = %d\n", ft_memcmp(lause1, lause1, 3));
	printf("eka ja toka = %d\n", ft_memcmp(lause1, lause2, 3));
	printf("kolmas ja neljas = %d\n", ft_memcmp(lause3, lause4, 3));
	printf("viides ja eka = %d\n", ft_memcmp(lause5, lause1, 3));
	return (0);
}
