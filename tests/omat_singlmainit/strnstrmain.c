/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstrmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:17:21 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/08 13:31:25 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*kaikki;
	char	*loyty;
	char	*tyhja;
	char	*loyty2;
	char	*eiloydy;

	kaikki = "Nonni minkalainen homma?";
	loyty = ft_strnstr(kaikki, "lainen hom", 21);
	tyhja = ft_strnstr(kaikki, "", 15);
	loyty2 = ft_strnstr(kaikki, "ni", 5);
	eiloydy = ft_strnstr(kaikki, "ni", 4);
	printf("Kaikki: %s\n", kaikki);
	printf("Loytyy: %s\n", loyty);
	printf("Tyhja: %s\n", tyhja);
	printf("Loyty2: %s\n", loyty2);
	printf("Ei loydy: %s\n", eiloydy);
	return (0);
}
