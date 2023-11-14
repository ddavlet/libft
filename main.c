#include "./1/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <bsd/string.h>


int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf ("At least 1 parameter needed");
		return (0);
	}
	printf("___\nISALPHA test:\n");
	printf("My solution:\n%i\n", ft_isalpha(*argv[1]));
	printf("Standart library:\n%i\n\n", isalpha(*argv[1]));

	printf("___\nISDIGIT test:\n");
	printf("My solution:\n%i\n", ft_isdigit(*argv[1]));
	printf("Standart library:\n%i\n\n", isdigit(*argv[1]));

	printf("___\nISALNUM test:\n");
	printf("My solution:\n%i\n", ft_isalnum(*argv[1]));
	printf("Standart library:\n%i\n\n", isalnum(*argv[1]));

	printf("___\nISASCII test:\n");
	printf("My solution:\n%i\n", ft_isascii(*argv[1]));
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
	printf("___\nBZERO test:\n");
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
	char	test6[11];
	char	test5[] = "some string";
	char	test7[11];
	printf("___\nMEMCPY test:\n");
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

	//MEMMOVE

	char	test8[] = "some string";
	char	test9[11];
	char	test10[] = "some string";
	char	test11[11];
	printf("___\nMEMMOVE test:\n");
	printf("My solution:\n");
	printf("%s - ", test8);
	ft_memmove(test9, test8, 11);
	printf("%s", test9);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s - ", test10);
	memmove(test11, test10, 11);
	printf("%s", test11);
	printf("\n\n");

	//STRLCPY

	char	test12[] = "some string";
	char	test13[11];
	char	test14[] = "some string";
	char	test15[11];
	printf("___\nSTRLCPY test:\n");
	printf("My solution:\n");
	printf("%s\n", test12);
	printf("%li\n", ft_strlcpy(test13, test12, 4));
	printf("%s", test13);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s\n", test14);
	printf("%li\n", strlcpy(test15, test14, 4));
	printf("%s", test15);
	printf("\n\n");

	//STRLCAT
	char	test16[] = "some string";
	char	test17[20] = "here is ";;
	char	test18[] = "some string";
	char	test19[20] = "here is ";;
	printf("___\nSTRLCAT test:\n");
	printf("My solution:\n");
	printf("%s\n", test16);
	printf("%li\n", ft_strlcat(test17, test16, 15));
	printf("%s", test17);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s\n", test18);
	printf("%li\n", strlcat(test19, test18, 15));
	printf("%s", test19);
	printf("\n\n");

	//ATOI

	printf("___\nATOI test:\n");
	printf("My solution:\n%i\n", ft_atoi(argv[1]));
	printf("Standart library:\n%i\n\n", atoi(argv[1]));

	return(0);
}
