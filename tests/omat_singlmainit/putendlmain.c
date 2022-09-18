/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendlmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:18:11 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/13 12:19:35 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	testi1[] = "What";
	char	testi2[] = "Whatwhat";

	ft_putendl(testi1);
	ft_putendl(testi2);
	ft_putstr(testi1);
	ft_putstr(testi2);
	return (0);
}
