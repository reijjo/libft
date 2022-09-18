/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:44:44 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/12 11:17:38 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	eka[] = "Vanha ";
	char	toka[] = "kunnon.";

	printf("Eka: %s\n", eka);
	printf("Toka: %s\n", toka);
	printf("Yhes: %s", ft_strjoin(eka, toka));
	return (0);
}
