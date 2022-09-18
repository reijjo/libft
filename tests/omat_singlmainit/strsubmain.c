/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsubmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:32:35 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/11 17:54:18 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	original[] = "123456789";

	printf("Kokonainen = %s\n", original);
	printf("mini = %s", ft_strsub(original, 3, 5));
	return (0);
}
