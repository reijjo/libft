/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:52:58 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 12:57:56 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause;

	lause = "12345";
	printf("%s ja sen pituus on %zu", lause, ft_strlen(lause));
	return (0);
}
