/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdupmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:14:34 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 13:31:29 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause1 = "Ahteri";
	char	*lause2 = "joo";

	printf("Lause = %s\n", lause1);
	printf("Kopio ennen = %s\n", lause2);
	lause2 = ft_strdup(lause1);
	printf("Kopio jalkeen = %s", lause2);
	return (0);
}
