/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textra_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:29:26 by taitomer          #+#    #+#             */
/*   Updated: 2021/12/03 13:33:47 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

int	main(void)
{
	//	FT_ABS
	printf("	FT_ABS\n");

	printf("-2 %d\n", ft_abs(-2));
	printf("8 %d\n", ft_abs(8));

	//	FT_HIGHERINT
	printf("\n	FT_HIGHERINT\n");

	printf("3 vai 7 isompi? %d\n", ft_higherint(3, 7));
	printf("5 ja 5? %d\n", ft_higherint(5, 5));

	//	FT_WORD_LENGTH
	printf("\n	FT_WORD_LENGTH\n");

	char	sana[] = "123456789 23456";
	int	i = 0;
	printf("Sana: %s ja sen pituus: %d\n", sana, ft_word_length(sana, i, ' '));

	//	FT_COUNT_WORDS
	printf("\n	FT_COUNT_WORDS\n");

	char	montasanaa[] = "WOppi jeep huhu pppp viides";
	printf("Lause: %s\n", montasanaa);
	printf("Sanoja yhteensa: %d\n", ft_count_words(montasanaa, ' '));

	//	FT_PRINTLIST
	printf("\n	FT_PRINTLIST\n");

	t_list	*list;
	char	str1[] = "eka:	Terve!";
	char	str2[] = "toka:	dubbiduu";

	list = ft_lstnew(str1, sizeof(str1));
	ft_lstadd(&list, ft_lstnew(str2, sizeof(str2)));
	ft_printlist(list);
	return (0);
}
