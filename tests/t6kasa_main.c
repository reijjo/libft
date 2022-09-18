/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kuudes_kasa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:31:10 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/24 15:36:08 by taitomer         ###   ########.fr       */
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
	printf(MAGENTA"\n	6TH BUNCH\n");
	printf("	6TH BUNCH\n\n"RESET);
	//	FT_MEMDEL
	printf(YELLOW"	FT_MEMDEL:\n"RESET);
	char *tyhja = "moromommo!";
	tyhja = (char *)malloc(sizeof(char) * 10);
	printf(CYAN"Aluks: %s	%p\n"RESET, tyhja, tyhja);
	ft_memdel((void**)&tyhja);
	printf("Lopuks:	%p\n\n", tyhja);
	//
	//	FT_STRITER
	printf(YELLOW"	FT_STRITER:\n"RESET);
	void (*striter)(char *);
	char	teksti[] = "abc";
	striter = &test_striter;
	printf(CYAN"Aluks:		%s\n", teksti);
	ft_striter(teksti, striter);
	printf("Pitas olla:	bcd\n"RESET);
	printf("Lopuks:		%s\n\n", teksti);
	//
	//	FT_STRITERI
	printf(YELLOW"	FT_STRITERI:\n"RESET);
	void	(*striteri)(unsigned int, char *);
	char	aakkosia[] = "ABCDEFGHIJKLMNOPQRSTU";
	striteri = &test_striteri;
	printf(CYAN"Aluks:		%s\n", aakkosia);
	ft_striteri(aakkosia, striteri);
	printf("Pitas olla:	FGHIJKLMNOPQRSTUVWXYZ\n"RESET);
	printf("Lopuks:		%s\n\n", aakkosia);
	//
	//	FT_STRMAP
	printf(YELLOW"	FT_STRMAP:\n"RESET);
	char	map[] = "SDQUD";
	printf(CYAN"aluks:	%s\n", map);
	printf("pitas: 	TERVE\n"RESET);
	printf("lopuks:	%s\n\n", ft_strmap(map, test_strmap)); 
	//
	//	FT_STRMAPI
	printf(YELLOW"	FT_STRMAPI:\n"RESET);
	char	mapi[] = "ABCDEFGHIJKLMNOPQRST";
	printf(CYAN"Ekaks:	%s\n", mapi);
	printf("pitas:	GHIJKLMNOPQRSTUVWXYZ\n"RESET);
	printf("Lopuks:	%s\n\n", ft_strmapi(mapi, *test_strmapi));
	//
	//	FT_STRTRIM
	printf(YELLOW"	FT_STRTRIM:\n"RESET);
	char	trimmaus[] = "No onko niita valeja?";
	char	bctrim[] = "   \n   \t	No onko niita valeja?	\t   \n  ";
	printf(GREEN"Original:%s\n"RESET, trimmaus);
	printf(CYAN"Seka: %s\n"RESET, bctrim);
	printf("Trimmattu:%s\n\n", ft_strtrim(bctrim));
	//
	//	FT_STRSPLIT
	printf(YELLOW"	FT_STRSPLIT:\n"RESET);
	char	**splitsanat;
	printf(CYAN"Aluks:	*hello*fellow***students*\n");
	splitsanat = ft_strsplit("*hello*fellow***students*", '*');
	ft_putstr(RESET"Lopuks:	");
	while (*splitsanat != '\0')
	{
		ft_putstr(*splitsanat);
		ft_putstr(" ");
		splitsanat++;
	}
	//
	//	FT_ITOA
	printf(YELLOW"\n\n	FT_ITOA:\n"RESET);
	printf(CYAN"Pitas:	777	-777	-2147483648	-623	156	0\n"RESET);
	printf("On:	%s	%s	%s	%s	%s	%s", ft_itoa(777), ft_itoa(-777), ft_itoa(-2147483648), ft_itoa(-623), ft_itoa(156), ft_itoa(-0));
	return (0);
}
