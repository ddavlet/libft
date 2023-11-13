#include "./1/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("___\nISALPHA test:\n");
	printf("My solution:\n%i\n", ft_isalpha(*argv[1]));
	printf("Standart library:\n%i\n\n", isalpha(*argv[1]));

	printf("___\nISDIGIT test:\n");
	printf("My solution:\n%i\n", ft_isdigit(*argv[1]));
	printf("Standart library:\n%i\n\n", isdigit(*argv[1]));

	printf("___\nISALNUM test:\n");
	printf("___\nMy solution:\n%i\n", ft_isalnum(*argv[1]));
	printf("Standart library:\n%i\n\n", isalnum(*argv[1]));

	printf("___\nISASCII test:\n");
	printf("___\nMy solution:\n%i\n", ft_isascii(*argv[1]));
	printf("Standart library:\n%i\n\n", isascii(*argv[1]));

	printf("___\nISPRINT test:\n");
	printf("My solution:\n%i\n", ft_isprint(*argv[1]));
	printf("Standart library:\n%i\n\n", isprint(*argv[1]));

	printf("___\nSTRLEN test:\n");
	printf("My solution:\n%lu\n", ft_strlen(argv[1]));
	printf("Standart library:\n%lu\n\n", strlen(argv[1]));

	//MEMSET
	char	test[] = "some string";
	char	test1[] = "some string";
	printf("___\nMEMSET test:\n");
	printf("My solution:\n");
	printf("Before change:\n");
	printf("%s ", test);
	ft_memset(test, '0', 3);
	printf("\n");
	printf("After change:\n");
	printf("%s ", test);
	printf("\n\n");
	printf("Standart library:\n");
	printf("Before change:\n");
	printf("%s ", test1);
	memset(test1, 't', 3);
	printf("\n");
	printf("After change:\n");
	printf("%s ", test1);
	printf("\n\n");

	//BZERO
	char	test2[] = "some string";
	char	test3[] = "some string";
	printf("___\nBZERO test2:\n");
	printf("My solution:\n");
	printf("Before change:\n");
	printf("%s ", test2);
	ft_bzero(test2, 2);
	printf("\n");
	printf("After change:\n");
	printf("%s ", test2);
	printf("\n\n");
	printf("Standart library:\n");
	printf("Before change:\n");
	printf("%s ", test3);
	bzero(test3, 2);
	printf("\n");
	printf("After change:\n");
	printf("%s ", test3);
	printf("\n\n");

	//MEMCPY

	char	test4[] = "some string";
	char	test6[4];
	char	test5[] = "some string";
	char	test7[4];
	printf("___\nMEMCPY test2:\n");
	printf("My solution:\n");
	printf("%s - ", test4);
	ft_memcpy(test6, test4, 11);
	printf("%s", test6);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s - ", test5);
	memcpy(test7, test5, 11);
	printf("%s", test7);
	printf("\n\n");




	//ATOI

	printf("___\nATOI test:\n");
	printf("My solution:\n%i\n", ft_atoi(argv[1]));
	printf("Standart library:\n%i\n\n", atoi(argv[1]));

	return(0);
}
