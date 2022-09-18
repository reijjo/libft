/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kuudes_kasa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:31:10 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/21 16:01:27 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_striter(char *c)
{
	*c = *c + 1;
}

void	test_striteri(unsigned int i, char *c)
{
	i = 5;
	*c = *c + i;
}

char	test_strmap(char c)
{
	char	uus;

	uus = c + 1;
	return (uus);
}

char	test_strmapi(unsigned int i, char c)
{
	char uus;

	i = 5;
	uus = c + 1 + 5;
	return (uus);
}
int	main(void)
{
	//	FT_MEMDEL
	printf("	FT_MEMDEL:\n");
	void	*tyhja = (char *)malloc(sizeof(char));
	printf("Aluks:	%p\n", tyhja);
	ft_memdel(&tyhja);
	printf("Lopuks:	%p\n\n", tyhja);
	//
	//	FT_STRITER
	printf("	FT_STRITER:\n");
	void (*striter)(char *);
	char	teksti[] = "abc";
	striter = &test_striter;
	printf("Aluks:		%s\n", teksti);
	ft_striter(teksti, striter);
	printf("Pitas olla:	bcd\n");
	printf("Lopuks:		%s\n\n", teksti);
	//
	//	FT_STRITERI
	printf("	FT_STRITERI:\n");
	void	(*striteri)(unsigned int, char *);
	char	aakkosia[] = "ABCDEFGHIJKLMNOPQRSTU";
	striteri = &test_striteri;
	printf("Aluks:		%s\n", aakkosia);
	ft_striteri(aakkosia, striteri);
	printf("Pitas olla:	FGHIJKLMNOPQRSTUVWXYZ\n");
	printf("Lopuks:		%s\n\n", aakkosia);
	//
	//	FT_STRMAP
	printf("	FT_STRMAP:\n");
	char	map[] = "SDQUD";
	printf("aluks:	%s\n", map);
	printf("pitas: 	TERVE\n");
	printf("lopuks:	%s\n\n", ft_strmap(map, test_strmap)); 
	//
	//	FT_STRMAPI
	printf("	FT_STRMAPI:\n");
	char	mapi[] = "ABCDEFGHIJKLMNOPQRST";
	printf("Ekaks:	%s\n", mapi);
	printf("pitas:	GHIJKLMNOPQRSTUVWXYZ\n");
	printf("Lopuks:	%s\n\n", ft_strmapi(mapi, *test_strmapi));
	//
	//	FT_STRTRIM
	printf("	FT_STRTRIM:\n");
	char	trimmaus[] = "No onko niita valeja?";
	char	bctrim[] = "   \n   \t	No onko niita valeja?	\t   \n  ";
	printf("Original:%s\n", trimmaus);
	printf("Seka: %s\n", bctrim);
	printf("Trimmattu:%s\n\n", ft_strtrim(bctrim));
	//
	//	FT_STRSPLIT
	printf("	FT_STRSPLIT:\n");
	char	**splitsanat;
	printf("Aluks:	*hello*fellow***students*\n");
	splitsanat = ft_strsplit("*hello*fellow***students*", '*');
	ft_putstr("Lopuks:	");
	while (*splitsanat != '\0')
	{
		ft_putstr(*splitsanat);
		ft_putstr(" ");
		splitsanat++;
	}
	//
	//	FT_ITOA
	printf("\n\n	FT_ITOA:\n");
	printf("Pitas:	777	-777	-2147483648	-623	156	0\n");
	printf("On:	%s	%s	%s	%s	%s	%s", ft_itoa(777), ft_itoa(-777), ft_itoa(-2147483648), ft_itoa(-623), ft_itoa(156), ft_itoa(-0));
	return (0);
}
