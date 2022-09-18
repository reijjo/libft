/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viides_kasa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:21:15 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/21 13:23:12 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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

int	main(void)
{
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
	return (0);
}
