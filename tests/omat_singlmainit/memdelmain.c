/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memdelmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:47:49 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/14 16:32:08 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	void	*mita;

	mita = (char *)malloc(sizeof(char));
	printf("Aluksi: %p\n", mita);
	ft_memdel(&mita);
	printf("Jalkeen: %p", mita);
	return (0);
}
