/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:43:02 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/13 12:44:13 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	min;
	int	max;

	min = -2147483648;
	max = 2147483647;
	ft_putstr("Alle 0 = ");
	ft_putnbr(-4);
	ft_putstr("\nAlle 10 = ");
	ft_putnbr(4);
	ft_putstr("\nYli 10 = ");
	ft_putnbr(44);
	ft_putstr("\nMIN = ");
	ft_putnbr(min);
	ft_putstr("\nMAX = ");
	ft_putnbr(max);
	return (0);
}
