/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchrmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:41:33 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/18 10:09:38 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause;
	char	*vastaus1;
	char	*vastaus2;

	lause = "eka B toka B liirumlaarum";
	vastaus1 = ft_strrchr(lause, 'B');
	vastaus2 = ft_strrchr(lause, 'z');
	printf("Koko lause = %s\n", lause);
	printf("Loytyyko vika B: %s\n", vastaus1);
	printf("Loytyyko vika z: %s\n", vastaus2);
	return (0);
}
