/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eka_kasamain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:59:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/20 12:15:10 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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

void	printlist(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		ft_putchar('\n');
		list = list->next;
	}
}

void	lst_del(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

void	test_lstiter(t_list *c)
{
	char	*content;

	content = (char *)c;
	*content = *content + 3;
}

t_list	*test_lstmap(t_list *elem)
{
	char	*content1;

	content1 = (char *)elem;

	*content1 = *content1 + 1;
	return (elem);
}

int	main(void)
{
	printf(MAGENTA"\n	1ST BUNCH\n"RESET);
	printf(MAGENTA"	1ST BUNCH\n\n"RESET);
	//	FT_STRLEN
	printf(YELLOW"	FT_STRLEN\n"RESET);
	printf(CYAN"LIBC %s ja sen pituus on %zu\n"RESET, "12345", strlen("12345"));
	printf(" OMA %s ja sen pituus on %zu\n\n", "12345", ft_strlen("12345"));
	//
	// FT_ISALPHA
	printf(YELLOW"	FT_ISALPHA\n"RESET);
	printf(CYAN"LIBC %c | %c | %c\n"RESET, isalpha('p'), isalpha('5'), isalpha('A'));
	printf(" OMA %c | %c | %c\n\n", ft_isalpha('p'), ft_isalpha('5'), ft_isalpha('A'));
	//
	// FT_ISDIGIT
	printf(YELLOW"	FT_ISDIGIT\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c\n"RESET, isdigit('0'), isdigit('+'), isdigit('9'), isdigit('5'));
	printf(" OMA %c | %c | %c | %c\n\n", ft_isdigit('0'), ft_isdigit('+'), ft_isdigit('9'), ft_isdigit('5'));
	//
	// FT_ISALNUM
	printf(YELLOW"	FT_ISALNUM\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c\n"RESET, isalnum('p'), isalnum('-'), isalnum('('), isalnum('3'));
	printf(" OMA %c | %c | %c | %c\n\n", ft_isalnum('p'), ft_isalnum('-'), ft_isalnum('('), ft_isalnum('3'));
	//
	// FT_ISASCII
	printf(YELLOW"	FT_ISASCII\n"RESET);
	printf(CYAN"LIBC %c | %c | %c\n"RESET, isascii(82), isascii(167), isascii(101));
	printf(" OMA %c | %c | %c\n\n", ft_isascii(82), ft_isascii(167), ft_isascii(101));
	//
	// FT_ISPRINT
	printf(YELLOW"	FT_ISPRINT\n"RESET);
	printf(CYAN"LIBC %c | %c | %s%c%s | %c | %c\n"RESET, isprint(33), isprint(212), "SPACE", isprint(32), "TESTI", isprint(42), isprint(94));
	printf(" OMA %c | %c | %s%c%s | %c | %c\n", ft_isprint(33), ft_isprint(212), "SPACE", ft_isprint(32), "TESTI", ft_isprint(42), ft_isprint(94));
	
//--------------------------------------------------

	printf(MAGENTA"\n	2ND BUNCH\n");
	printf("	2ND BUNCH\n\n");
	//	FT_TOUPPER
	printf(YELLOW"	FT_TOUPPER:\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c | %c\n"RESET, toupper(97), toupper(109), toupper('o'), toupper(105), toupper(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_toupper(97), ft_toupper(109), ft_toupper('o'), ft_toupper(105), ft_toupper(219));
	//
	//	FT_TOLOWER
	printf(YELLOW"	FT_TOLOWER:\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c | %c\n"RESET, tolower(65), tolower(77), tolower('O'), tolower(73), tolower(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_tolower(65), ft_tolower(77), ft_tolower('O'), ft_tolower(73), ft_tolower(219));
	//
	//	FT_MEMCHR
	printf(YELLOW"	FT_MEMCHR:\n"RESET);
	char	test1[] = "No mita helvettia?";
	printf(GREEN"testi:	%s\n\n"RESET, test1);
	printf(CYAN"LIBC	%s\n"RESET, memchr(test1, 't', sizeof(test1)));
	printf(" OMA	%s\n", ft_memchr(test1, 't', sizeof(test1)));
	printf(CYAN"LIBC	%s\n"RESET, memchr(test1, 'z', sizeof(test1)));
	printf(" OMA	%s\n\n", ft_memchr(test1, 'z', sizeof(test1)));
	//
	//	FT_STRCHR
	printf(YELLOW"	FT_STRCHR:\n"RESET);
	char	test[] = "eka B toka B diibadaaba";
	printf(GREEN"testi:	%s\n\n"RESET, test);
	printf(CYAN"LIBC	%s\n"RESET, strchr(test, 'B'));
	printf("OMA	%s\n", ft_strchr(test, 'B'));
	printf(CYAN"LIBC	%s\n"RESET, strchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strchr(test, 'z'));
	//
	//	FT_STRTCHR
	printf(YELLOW"	FT_STRRHR:\n"RESET);
	printf(GREEN"testi:	%s\n\n"RESET, test);
	printf(CYAN"LIBC	%s\n"RESET, strrchr(test, 'B'));
	printf("OMA	%s\n", ft_strrchr(test, 'B'));
	printf(CYAN"LIBC	%s\n"RESET, strrchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strrchr(test, 'z'));
	//
	//	FT_BZERO
	printf(YELLOW"	FT_BZERO:\n"RESET);
	char	testbzero[] = "pitkula";
	printf(CYAN"ekaks:	%s, osote:	%p\n"RESET, testbzero, testbzero);
	ft_bzero(testbzero, 5);
	printf("lopuks:	%s, osote:	%p\n", testbzero, testbzero);

//--------------------------------------------------

    printf(MAGENTA"\n	3RD BUNCH\n");
	printf("	3RD BUNCH\n\n"RESET);
	//	FT_MEMCPY
	printf(YELLOW"	FT_MEMCPY:\n"RESET);
	char	testmemcpy[15] = "MoROooTERRVEE!";
	char	copy[15] = "?";
	printf(GREEN"Original:	%s, copy:	%s\n"RESET, testmemcpy, copy);
	printf(CYAN"LIBC		%s, copy:	%s\n"RESET, testmemcpy, memcpy(copy, testmemcpy, 5));
	printf(" OMA		%s, copy:	%s\n\n", testmemcpy, ft_memcpy(copy, testmemcpy, 5));
	//
	//	FT_STRCPY
	printf(YELLOW"	FT_STRCPY:\n"RESET);
	char	teststrcpy[50] = "Woopwoop!";
	char	copystrcpy[50] = "WHATWHATWHAT";
	printf(GREEN"Original:	%s, copy:	%s\n"RESET, teststrcpy, copystrcpy);
	printf(CYAN"LIBC		%s, copy:	%s\n"RESET, teststrcpy, strcpy(copystrcpy, teststrcpy));
	printf(" OMA		%s, copy:	%s\n\n", teststrcpy, ft_strcpy(copystrcpy, teststrcpy));
	//
	//	FT_STRCAT
	printf(YELLOW"	FT_STRCAT:\n"RESET);
	char eka[50] = "KURA";
	char toka[50] = "PERSE!";
	printf(CYAN"Eka:	%s, toka: %s\n"RESET, eka, toka);
	printf("Yhessa:	%s\n\n", ft_strcat(eka, toka));
	//
	//	FT_STRCMP
	printf(YELLOW"	FT_STRCMP:\n"RESET);
	char cmp1[50] = "ABC";
	char cmp2[50] = "AB";
	char cmp3[50] = "ABA";
	char cmp4[50] = "ABZ";
	printf(GREEN"cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s\n"RESET, cmp1, cmp2, cmp3, cmp4);
	printf(CYAN"LIBC cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n"RESET, strcmp(cmp1, cmp1), strcmp(cmp1, cmp2), strcmp(cmp3, cmp4));
	printf(" OMA cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n\n", ft_strcmp(cmp1, cmp1), ft_strcmp(cmp1, cmp2), ft_strcmp(cmp3, cmp4));
	//
	//	FT_STRSTR
	printf(YELLOW"	FT_STRSTR:\n"RESET);
	char	strtest[50] = "Nonni minkalainen homma?";
	printf(GREEN"TEST:		%s\n"RESET, strtest);
	printf(CYAN"LIBC_FOUND:		%s\n"RESET, strstr(strtest, "kalai"));
	printf(" OMA_FOUND:		%s\n", ft_strstr(strtest, "kalai"));
	printf(CYAN"LIBC_EMPTY:		%s\n"RESET, strstr(strtest, ""));
	printf(" OMA_EMPTY:		%s\n", ft_strstr(strtest, ""));
	printf(CYAN"LIBC_NONO:		%s\n"RESET, strstr(strtest, "jdksa"));
	printf(" OMA_NONO:		%s\n", ft_strstr(strtest, "jdksa"));
	printf(CYAN"LIBC_NONO2:		%s\n"RESET, strstr(strtest, "niminka"));
	printf(" OMA_NONO2:		%s\n\n", ft_strstr(strtest, "niminka"));
	//
	//	FT_MEMMOVE
	printf(YELLOW"	FT_MEMMOVE:\n"RESET);
	char	move1[] = "ONKS OLLU MITAAN?";
	char	move2[] = "aika hiljast";
	char	move3[] = "MURSU MARSU ???";
	printf(GREEN"Eka: %s	toka: %s	kolmas: %s\n"RESET, move1, move2, move3);
	printf(CYAN"LIBC1	%s\n"RESET, memmove(move1, move2, 5));
	printf(" OMA1	%s\n", ft_memmove(move1, move2, 5));
	printf(CYAN"LIBC2	%s\n"RESET, memmove(move3, &move3[6], 5));
	printf(" OMA2	%s\n\n", ft_memmove(move3, &move3[6], 5));
	//
	//	FT_MEMCMP
	printf(YELLOW"	FT_MEMCMP:\n"RESET);
	char	cmp5[50] = "ABJ";
	char	cmp6[50] = "ABR";
	printf(GREEN"cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s	cmp5 = %s	cmp6 = %s\n"RESET, cmp1, cmp2, cmp3, cmp4, cmp5, cmp6);
	printf(CYAN"LIBC cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n"RESET, memcmp(cmp1, cmp1, 3), memcmp(cmp1, cmp6, 3), memcmp(cmp3, cmp4, 3), memcmp(cmp5, cmp1, 3));
	printf(" OMA cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n\n", ft_memcmp(cmp1, cmp1, 3), ft_memcmp(cmp1, cmp6, 3), ft_memcmp(cmp3, cmp4, 3), ft_memcmp(cmp5, cmp1, 3));

//--------------------------------------------------

    printf(MAGENTA"\n	4TH BUNCH\n");
	printf("	4TH BUNCH\n\n"RESET);
	//	FT_STRLCAT
	printf(YELLOW"	FT_STRLCAT:\n"RESET);
	char	desti[20] = "Testi ";
	char	source[20] = "toimii?";

	printf(GREEN"DST =	%s	SRC = %s\n"RESET, desti, source);
	ft_strlcat(desti, source, 15);
	printf("OMA =	%s\n\n", desti);
	//
	//	FT_STRDUP
	printf(YELLOW"	FT_STRDUP:\n"RESET);
	char	*dup1 = "Ahteri";
	char	*dup2 = "joo";
	printf(GREEN"Sana1: %s	Sana2:	%s\n"RESET, dup1, dup2);
	dup2 = ft_strdup(dup1);
	printf("Sana2 dup jalkeen:	%s\n\n", dup2);	
	//
	//	FT_ATOI
	printf(YELLOW"	FT_ATOI:\n"RESET);
	printf(CYAN"ATOI normi: %d\n"RESET, atoi("777"));
	printf(" MUN normi: %d\n", ft_atoi("777"));
	printf(CYAN"ATOI miinus: %d\n"RESET, atoi("-777"));
	printf(" MUN miinus: %d\n", ft_atoi("-777"));
	printf(CYAN"ATOI plusmerkki: %d\n"RESET, atoi("+777"));
	printf(" MUN plusmerkki: %d\n", ft_atoi("+777"));
	printf(CYAN"ATOI valeja: %d\n"RESET, atoi("  777"));
	printf(" MUN valeja: %d\n", ft_atoi("  777"));
	printf(CYAN"ATOI tab: %d\n"RESET, atoi("	777"));
	printf(" MUN tab: %d\n", ft_atoi("	777"));
	printf(CYAN"ATOI vali valissa: %d\n"RESET, atoi("77  7"));
	printf( "MUN vali valissa: %d\n", ft_atoi("77  7"));
	printf(CYAN"ATOI rivinvaihto alussa: %d\n"RESET, atoi("\n777"));
	printf(" MUN rivinvaihto alussa: %d\n", ft_atoi("\n777"));
	printf(CYAN"ATOI min int: %d\n"RESET, atoi("-2147483648"));
	printf(" MUN min int: %d\n", ft_atoi("-2147483648"));
	printf(CYAN"ATOI max int: %d\n"RESET, atoi("2147483647"));
	printf(" MUN max int: %d\n", ft_atoi("2147483647"));
	printf(CYAN"ATOI yli min int: %d\n"RESET, atoi("-2147483649"));
	printf(" MUN yli min int: %d\n", ft_atoi("-2147483649"));
	printf(CYAN"ATOI yli max int: %d\n"RESET, atoi("2147483648"));
	printf("MUN yli max int: %d\n", atoi("2147483648"));
	printf(CYAN"ATOI DONT WORK WITH BLANKS1?: %d\n"RESET, atoi("\t\v\f\r\n \f-06050"));
	printf(" MUN DONT WORK WITH BLANKS1?: %d\n", ft_atoi("\t\v\f\r\n \f-06050"));
	printf(CYAN"ATOI DONT WORK WITH BLANKS2?: %d\n"RESET, atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf(" MUN DONT WORK WITH BLANKS2? MUN: %d\n\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	//
	//	FT_MEMCCPY
	printf(YELLOW"	FT_MEMCCPY:\n"RESET);
	char	ccpyORI[50] = "huhhuh eipa!";
	char	ccpyCPY[50] = "....";
	printf(GREEN"Original = %s	copy = %s\n"RESET, ccpyORI, ccpyCPY);
	printf(CYAN"LIBC: huhhuh ei\n"RESET);
	ft_memccpy(ccpyCPY, ccpyORI, 'i', 10);
	printf("OMA : %s\n", ccpyCPY);
	ft_memccpy(ccpyCPY, ccpyORI, 'z', sizeof(ccpyORI));
	printf(CYAN"LIBC: huhhuh eipa!\n"RESET);
	printf("OMA : %s\n\n", ccpyCPY);
	//
	//	FT_STRNSTR
	printf(YELLOW"	FT_STRNSTR:\n"RESET);
	char *teststrn = "Nonni minkalainen homma?";
	printf(GREEN"TEST:	%s\n"RESET, teststrn);
	printf(CYAN"LIBC_FOUND:	%s\n"RESET, strnstr(teststrn, "lainen hom", 21));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "lainen hom", 21));
	printf(CYAN"LIBC_EMPTY:	%s\n"RESET, strnstr(teststrn, "", 15));
	printf(" OMA_EMPTY:	%s\n", ft_strnstr(teststrn, "", 15));
	printf(CYAN"LIBC_FOUND:	%s\n"RESET, strnstr(teststrn, "ni", 5));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "ni", 5));
	printf(CYAN"LIBC_NONO:	%s\n"RESET, strnstr(teststrn, "ni", 4));
	printf(" OMA_NONO:	%s\n\n", ft_strnstr(teststrn, "ni", 4));
	//
	//	FT_STRNCMP
	printf(YELLOW"	FT_STRNCMP:\n"RESET);
	char	*lause1 = "PERKELE";
	char	*lause2 = "PERSAATANA";
	printf(GREEN"eka: %s	toka: %s\n"RESET, lause1, lause2);
	printf(CYAN"LIBC 2 merkkia	%d\n"RESET, strncmp(lause1, lause2, 2));
	printf(" OMA 2 merkkia	%d\n", ft_strncmp(lause1, lause2, 2));
	printf(CYAN"LIBC 3 merkkia	%d\n"RESET, strncmp(lause1, lause2, 3));
	printf(" OMA 3 merkkia	%d\n", ft_strncmp(lause1, lause2, 3));
	printf(CYAN"LIBC 5 merkkia	%d\n"RESET, strncmp(lause1, lause2, 5));
	printf(" OMA 5 merkkia	%d\n\n", ft_strncmp(lause1, lause2, 5));
	//
	//	FT_STRNCPY
	printf(YELLOW"	FT_STRNCPY:\n"RESET);
	char	ncpyORI[] = "Woopwoop!";
	char	ncpyCPY[] = "WHATWHATWHAAAT";
	printf(GREEN"Original: %s	copy: %s\n"RESET, ncpyORI, ncpyCPY);
	ft_strncpy(ncpyCPY, ncpyORI, 5);
	printf(CYAN"LIBC copy (5) jalkeen: woopwHATWHAAAT\n"RESET);
	printf(" OMA copy (5) jalkeen: %s\n\n", ncpyCPY);
	//
	//	FT_STRNCAT
	printf(YELLOW"	FT_STRNCAT:\n"RESET);
	char	strneka[50] = "No huhhuh ";
	char	strntoka[50] = "saatana";
	printf(GREEN"Eka = %s	toka = %s\n"RESET, strneka, strntoka);
	ft_strncat(strneka, strntoka, 4);
	printf(CYAN"LIBC kimpassa: No huhhuh saat\n"RESET);
	printf(" OMA kimpassa: %s\n\n", strneka);

//--------------------------------------------------

    printf(MAGENTA"\n	5TH BUNCH\n");
	printf("	5TH BUNCH\n\n"RESET);
	//	FT_MEMALLOC
	printf(YELLOW"	FT_MEMALLOC:\n"RESET);
	char	*memall	= "MITAAA";
	printf(CYAN"Before:	%s %p\n"RESET, memall, memall);
	ft_memalloc(5);
	printf("After?:	%s %p\n\n", memall, memall);
	//
	//	FT_PUTCHAR
	printf(YELLOW"	FT_PUTCHAR:\n"RESET);
	printf(CYAN"WRITE: \n");
   	write(1, "G", 1);
	printf(RESET"\nPUTCHAR:\n");
   	ft_putchar('G');	
	//
	//	FT_PUTSTR
	printf(YELLOW"\n\n	FT_PUTSTR:\n"RESET);
	printf(CYAN"PRINTF:		Toimiiko?\n");
	ft_putstr(RESET"FT_PUTSTR:	Toimiiko?\n");
	//
	//	FT_PUTENDL
	printf(YELLOW"\n	FT_PUTENDL:\n"RESET);
	ft_putendl(CYAN"FT_PUTENDL:	What");
	ft_putendl("FT_PUTENDL:	Whatwhat"RESET);
	ft_putstr("FT_PUTSTR:	What");
	ft_putstr("FT_PUTSTR:	Whatwhat");
	//
	//	FT_PUTNBR
	printf(YELLOW"\n\n	FT_PUTNBR:\n"RESET);
	ft_putstr(CYAN"Alle 0		(-4)		"RESET);
	ft_putnbr(-4);
	ft_putstr(CYAN"\nAlle 10		(4)		"RESET);
	ft_putnbr(4);
	ft_putstr(CYAN"\nYli 10		(44)		"RESET);
	ft_putnbr(44);
	ft_putstr(CYAN"\nMIN 		(-2147483648)	"RESET);
	ft_putnbr(-2147483648);
	ft_putstr(CYAN"\nMAX 		(2147483647)	"RESET);
	ft_putnbr(2147483647);
	//
	//	FT_STRNEW
	printf(YELLOW"\n\n	FT_STRNEW:\n"RESET);
	char	*new = "AIVAN PIHAL";
	printf(CYAN"Aluks:	%s	%p\n"RESET, new, new);
	ft_strnew(sizeof(new));
	printf("Lopuks:	%s	%p\n", new, new); 
	//
	//	FT_STRDEL
	printf(YELLOW"\n	FT_STRDEL:\n"RESET);
	char	*muisti;
	muisti = (char *)malloc(sizeof(char));
	printf(CYAN"Ekaks:	%p\n"RESET, muisti);
	ft_strdel(&muisti);
	printf("Lopuks:	%p\n\n", muisti);
	//
	//	FT_STRCLR
	printf(YELLOW"	FT_STRCLR:\n"RESET);
	char clear[] = "Toimi sina edes";
	printf(CYAN"Ekaks:	%s %p\n"RESET, clear, clear);
	ft_strclr(clear);
	printf("Lopuks:	%s %p\n\n", clear, clear);
	//
	//	FT_STREQU
	printf(YELLOW"	FT_STREQU:\n"RESET);
	char	equ1[] = "HELVETTI";
	char	equ2[] = "HELVuuu";
	printf(CYAN"Sana1:	%s\n", equ1);
	printf("Sana2:	%s\n"RESET, equ2);
	printf("Sama:	%d\n", ft_strequ(equ1, equ1));
	printf("Eri:	%d\n\n", ft_strequ(equ1, equ2));
	//
	//	FT_STRNEQU
	printf(YELLOW"	FT_STRNEQU:\n"RESET);
	printf(CYAN"Sana1:	%s\n", equ1);
	printf("Sana2:	%s\n"RESET, equ2);
	printf("Sama 2 kirjainta?	%d\n", ft_strnequ(equ1, equ2, 2));
	printf("Sama 4 kirjainta?	%d\n", ft_strnequ(equ1, equ2, 4));
	printf("Sama 5 kirjainta?	%d\n\n", ft_strnequ(equ1, equ2, 5));
	//
	//	FT_STRSUB
	printf(YELLOW"	FT_STRSUB:\n"RESET);
	char	sub[] = "123456789";
	printf(CYAN"Koko = %s\n"RESET, sub);
	printf("Mini = %s\n\n", ft_strsub(sub, 3, 5));
	//
	//	FT_STRJOIN
	printf(YELLOW"	FT_STRJOIN:\n"RESET);
	char	join1[] = "Vanha ";
	char	join2[] = "kunnon.";
	printf(CYAN"Eka: %s	toka: %s\n"RESET, join1, join2);
	printf("Yhes: %s\n\n", ft_strjoin(join1, join2));
	//
	//	FT_PUT_FD
	printf(YELLOW"	FT_PUT_FD\n"RESET);
	printf(MAGENTA"cat FILEDESCRIPTOR\n"RESET);
	printf(CYAN"should be:	b\n");
	printf("should be:	What");
	printf("Whatwhat");
	printf("WHAT\n");
	printf("should be:	WHATWHAT\n");
	printf("should be:	-4\n");
	printf("should be:	4\n");
	printf("should be:	44\n");
	printf("should be:	-2147483648\n"RESET);
	int fd = open("FILEDESCRIPTOR", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("OPEN ERROR!");
		return (1);
	}
	ft_putchar_fd('b', fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("What", fd);
	ft_putstr_fd("Whatwhat", fd);
	ft_putendl_fd("WHAT", fd);
	ft_putendl_fd("WHATWHAT", fd);
	ft_putnbr_fd(-4, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(4, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(44, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	if (close(fd) == -1)
	{
		ft_putstr("CLOSE ERROR!");
		return (1);
	}
	close (fd);

    //--------------------------------------------------

    printf(MAGENTA"\n	6TH BUNCH\n");
	printf("	6TH BUNCH\n\n"RESET);
	//	FT_MEMDEL
	printf(YELLOW"	FT_MEMDEL:\n"RESET);
	void	*tyhja = (char *)malloc(sizeof(char));
	printf(CYAN"Aluks:	%p\n"RESET, tyhja);
	ft_memdel(&tyhja);
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

    //--------------------------------------------------

    printf(MAGENTA"\n   BONUS\n");
    printf("    BONUS\n\n"RESET);
    //	FT_LSTNEW
	printf(YELLOW"	FT_LSTNEW\n");
	
	t_list	*lstnew;
	char	str1[] = "What?";

	lstnew = NULL;
	ft_putstr(RESET"Null lista:\n");
	printlist(lstnew);
	lstnew = ft_lstnew(str1, sizeof(str1));
	ft_putstr("Uus lista:\n");
	printlist(lstnew);

	//	FT_LSTDELONE
	printf(YELLOW"\n	FT_LSTDELONE\n");

	t_list	*lstdelone1;
	t_list	*lstdelone2;
	t_list	*lstdelone3;

	char	*del1 = ft_strdup("Voitko");
	char	*del2 = ft_strdup("nyt");
	char	*del3 = ft_strdup("toimia?");

	lstdelone1 = ft_lstnew(del1, sizeof(del1));
	lstdelone2 = ft_lstnew(del2, sizeof(del2));
	lstdelone3 = ft_lstnew(del3, sizeof(del3));
	lstdelone1->next = lstdelone2;
	lstdelone2->next = lstdelone3;
	
	ft_putstr(RESET"Aluksi:	\n\n");
	printlist(lstdelone1);	
	
	ft_putstr("\ndelone:	\n\n");
	ft_lstdelone(&lstdelone1, &lst_del);
	ft_putstr("Eka: \n");
	printlist(lstdelone1);
	ft_putstr("Toka: \n");
	printlist(lstdelone2);
	//printlist(lstdelone3);

	//	FT_LSTDEL
	printf(YELLOW"\n	FT_LSTDEL\n");
	
	t_list *lstdel1;
	t_list *lstdel2;
	t_list *lstdel3;
	
	lstdel1 = ft_lstnew(del1, sizeof(del1));
	lstdel2 = ft_lstnew(del2, sizeof(del2));
	lstdel3 = ft_lstnew(del3, sizeof(del3));
	lstdel1->next = lstdel2;
	lstdel2->next = lstdel3;
	ft_putstr(RESET"Aluksi:\n");
	printlist(lstdel1);
	
	ft_putstr("\nlstdel:	\n");
	ft_lstdel(&lstdel1, &lst_del);
	ft_putstr("eka:\n");
	//printlist(lstdel1);
	//ft_putstr("toka:\n");
	//printlist(lstdel2);
	//printlist(lstdel3);

	//	FT_LSTADD
	printf(YELLOW"\n	FT_LSTADD\n");
	
	t_list	*lstadd;

	lstadd = ft_lstnew(del1, sizeof(del1));
	ft_putstr(RESET"Eka add:\n");
	printlist(lstadd);
	ft_lstadd(&lstadd, ft_lstnew(del2, sizeof(del2)));
	ft_putstr("\nToka add:\n");
	printlist(lstadd);
	ft_lstadd(&lstadd, ft_lstnew(del3, sizeof(del3)));
	ft_putstr("\nKolmas add:\n");
	printlist(lstadd);

	//	FT_LSTITER
	printf(YELLOW"\n	FT_LSTITER\n");

	t_list	*lstiter;
	t_list	*lstitertoka;
	t_list	*lstiterkolmas;
	char	*iter1 = ft_strdup("123456");
	char	*iter2 = ft_strdup("Terve!");
	char	*iter3 = ft_strdup("moimoimoi");

	lstiter = ft_lstnew(iter1, sizeof(iter1));
	lstitertoka = ft_lstnew(iter2, sizeof(iter2));
	lstiterkolmas = ft_lstnew(iter3, sizeof(iter3));
	
	lstiter->next = lstitertoka;
	lstitertoka->next = lstiterkolmas;
	ft_putendl(RESET"Before:");
	printlist(lstiter);

	ft_lstiter(lstiter, &test_lstiter);
	ft_putstr("\nAfter:\n");
	printlist(lstiter);	
	
	//	FT_LSTMAP
	printf(YELLOW"\n	FT_LSTMAP\n");
	t_list	*lstmap1;
	t_list	*lstmap2;
	t_list	*lstmap3;
	char	*map1 = ft_strdup("iiik");
	char	*map2 = ft_strdup("What?");
	char	*map3 = ft_strdup("Ziisus!");

	lstmap1 = ft_lstnew(map1, sizeof(map1));
	lstmap2 = ft_lstnew(map2, sizeof(map2));
	lstmap3 = ft_lstnew(map3, sizeof(map3));

	lstmap1->next = lstmap2;
	lstmap2->next = lstmap3;
	ft_putstr(RESET"Before:\n");
	printlist(lstmap1);
	
	ft_putstr("\nAfter:\n");
	ft_lstmap(lstmap1, test_lstmap);
	printlist(lstmap1);	

    return (0);
}
