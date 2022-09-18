/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalphamain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:43:11 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 08:57:26 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_isalpha('p'));
	printf("%c\n", ft_isalpha('5'));
	printf("%c\n", ft_isalpha('z'));
	printf("%c\n", ft_isalpha('B'));
	printf("%c\n", ft_isalpha('{'));
	printf("%c\n", ft_isalpha('q'));
	printf("%c\n", ft_isalpha('-'));
	printf("%c\n", ft_isalpha('A'));
	return (0);
}
