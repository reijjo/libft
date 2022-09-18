/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:53:49 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/05 11:58:49 by taitomer         ###   ########.fr       */
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
	vastaus1 = ft_strchr(lause, 'B');
	vastaus2 = ft_strchr(lause, 'z');
	printf("Koko lause = %s\n", lause);
	printf("Loytyyko B: %s\n", vastaus1);
	printf("Loytyyko z: %s\n", vastaus2);
	return (0);
}
