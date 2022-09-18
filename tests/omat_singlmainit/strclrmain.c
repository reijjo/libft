/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:06:57 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/11 11:09:23 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	lause[] = "Toimi sina nyt edes";

	printf("Ekaks: %s\n", lause);
	ft_strclr(lause);
	printf("lopuks: %s", lause);
	return (0);
}
