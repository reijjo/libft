/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:57:33 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/05 15:13:07 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*kokokasa;
	char	*loytyy;
	char	*tyhja;
	char	*eiloydy1;
	char	*eiloydy2;

	kokokasa = "Nonni minkalainen homma?";
	loytyy = ft_strstr(kokokasa, "kalai");
	tyhja = ft_strstr(kokokasa, "");
	eiloydy1 = ft_strstr(kokokasa, "jsdklajdklsa");
	eiloydy2 = ft_strstr(kokokasa, "niminka");
	printf("Kaikki: %s\n", kokokasa);
	printf("Loytyy: %s\n", loytyy);
	printf("Tyhja: %s\n", tyhja);
	printf("Ei loydy: %s\n", eiloydy1);
	printf("Ei loydy2: %s\n", eiloydy2);
	return (0);
}
