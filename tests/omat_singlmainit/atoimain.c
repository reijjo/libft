/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoimain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:26:42 by taitomer          #+#    #+#             */
/*   Updated: 2022/06/02 09:23:58 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("ATOI normi: %d\n", atoi("777"));
	printf(" MUN normi: %d\n", ft_atoi("777"));
	printf("ATOI miinus: %d\n", atoi("-777"));
	printf(" MUN miinus: %d\n", ft_atoi("-777"));
	printf("ATOI plusmerkki: %d\n", atoi("+777"));
	printf(" MUN plusmerkki: %d\n", ft_atoi("+777"));
	printf("ATOI valeja: %d\n", atoi("  777"));
	printf(" MUN valeja: %d\n", ft_atoi("  777"));
	printf("ATOI tab: %d\n", atoi("	777"));
	printf(" MUN tab: %d\n", ft_atoi("	777"));
	printf("ATOI vali Valissa: %d\n", atoi("77  7"));
	printf( "MUN vali Valissa: %d\n", ft_atoi("77  7"));
	printf("ATOI rivinvaihto alussa: %d\n", atoi("\n777"));
	printf(" MUN rivinvaihto alussa: %d\n", ft_atoi("\n777"));
	printf("ATOI min int: %d\n", atoi("-2147483648"));
	printf(" MUN min int: %d\n", ft_atoi("-2147483648"));
	printf("ATOI max int: %d\n", atoi("2147483647"));
	printf(" MUN max int: %d\n", ft_atoi("2147483647"));
	printf("ATOI yli min int: %d\n", atoi("-2147483649"));
	printf(" MUN yli min int: %d\n", ft_atoi("-2147483649"));
	printf("ATOI yli max int: %d\n", atoi("2147483648"));
	printf("MUN yli max int: %d\n", atoi("2147483648"));
	printf("ATOI DONT WORK WITH BLANKS1?: %d\n", atoi("\t\v\f\r\n \f-06050"));
	printf(" MUN DONT WORK WITH BLANKS1?: %d\n", ft_atoi("\t\v\f\r\n \f-06050"));
	printf("ATOI DONT WORK WITH BLANKS2?: %d\n", atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf(" MUN DONT WORK WITH BLANKS2? MUN: %d\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	return (0);
}
