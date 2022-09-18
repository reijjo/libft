/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrimain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:34:48 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/12 11:44:40 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	normi[] = "No onko niita valeja?";
	char	edes[] = "   \n   \t No onko niita valeja?";
	char	peras[] = "No onko niita valeja?   \t   \n   ";
	char	molemmis[] = "  \n \t   No onko niita valeja?  \n \t  ";

	printf("normi = %s\n", normi);
	printf("edes = %s\n", edes);
	printf("peras = %s\n", peras);
	printf("molemmis = %s\n", molemmis);
	printf("Trim jalkeen edes: %s\n", ft_strtrim(edes));
	printf("Trim jalkeen peras: %s\n", ft_strtrim(peras));
	printf("Trim jalkeen molemmis: %s\n", ft_strtrim(molemmis));
	return (0);
}
