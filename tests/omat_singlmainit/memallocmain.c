/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memallocmain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:10:33 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/14 16:30:52 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	testi[] = "MITAAAAA";

	printf("Ekaks: %s\n", testi);
	ft_memalloc(3);
	printf("jalkeen %s\n", testi);
	return (0);
}
