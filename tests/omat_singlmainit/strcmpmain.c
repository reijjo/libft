/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmpmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:00:30 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/08 14:04:59 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause1;
	char	*lause2;
	char	*lause3;
	char	*lause4;

	lause1 = "ABC";
	lause2 = "AB";
	lause3 = "ABA";
	lause4 = "ABZ";
	printf("%d\n", ft_strcmp(lause1, lause1));
	printf("%d\n", ft_strcmp(lause1, lause2));
	printf("%d\n", ft_strcmp(lause3, lause4));
	return (0);
}
