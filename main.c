#include "./1/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// #include <bsd/string.h>


int	main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf ("At least 3 parameter needed");
		return (0);
	}

	//ISALPHA
	printf("___\nISALPHA test:\n");
	printf("My solution:\n%i\n", ft_isalpha(*argv[1]));
	printf("Standart library:\n%i\n\n", isalpha(*argv[1]));

	//ISDIGIT
	printf("___\nISDIGIT test:\n");
	printf("My solution:\n%i\n", ft_isdigit(*argv[1]));
	printf("Standart library:\n%i\n\n", isdigit(*argv[1]));

	//ISALNUM
	printf("___\nISALNUM test:\n");
	printf("My solution:\n%i\n", ft_isalnum(*argv[1]));
	printf("Standart library:\n%i\n\n", isalnum(*argv[1]));

	//ISASCII
	printf("___\nISASCII test:\n");
	printf("My solution:\n%i\n", ft_isascii(*argv[1]));
	printf("Standart library:\n%i\n\n", isascii(*argv[1]));

	//ISPRINT
	printf("___\nISPRINT test:\n");
	printf("My solution:\n%i\n", ft_isprint(288));
	printf("Standart library:\n%i\n\n", isprint(288));

	//STRLEN
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
	ft_memmove(test9, test8, 5);
	printf("%s", test9);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s - ", test10);
	memmove(test11, test10, 5);
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
	char	test16[] = "slorem ipsum dolor sit amet";
	char	test17[10] = "aaaaaaaaaa";
	char	test18[] = "lorem ipsum dolor sit amet";
	char	test19[10] = "aaaaaaaaaa";
	printf("___\nSTRLCAT test:\n");
	printf("My solution:\n");
	printf("%s\n", test16);
	printf("%li\n", ft_strlcat(test17, test16, 0));
	printf("%s", test17);
	printf("\n\n");
	printf("Standart library:\n");
	printf("%s\n", test18);
	printf("%li\n", strlcat(test19, test18, 0));
	printf("%s", test19);
	printf("\n\n");

	//TOUPPER
	printf("___\nTOUPPER test:\n");
	printf("My solution:\n%c\n", ft_toupper(*argv[1]));
	printf("Standart library:\n%c\n\n", toupper(*argv[1]));

	//TOLOWER
	printf("___\nTOLOWER test:\n");
	printf("My solution:\n%c\n", ft_tolower(*argv[1]));
	printf("Standart library:\n%c\n\n", tolower(*argv[1]));

	//STRCHR
	printf("___\nSTRCHR test:\n");
	printf("My solution:\n%s\n", ft_strchr(argv[1], *argv[2]));
	printf("Standart library:\n%s\n\n", strchr(argv[1], *argv[2]));

	//STRRCHR
	printf("___\nSTRRCHR test:\n");
	printf("My solution:\n%s\n", ft_strrchr(argv[1], *argv[2]));
	printf("Standart library:\n%s\n\n", strrchr(argv[1], *argv[2]));
	printf("My solution:\n%s\n", ft_strrchr("123456789", 'a'));
	printf("Standart library:\n%s\n\n", strrchr("123456789", 'a'));

	//STRNCMP
	printf("___\nSTRNCMP test:\n");
	printf("My solution:\n%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("Standart library:\n%d\n\n", strncmp("test\200", "test\0", 6));

	//MEMCHR
	printf("___\nMEMCHR test:\n");
	printf("My solution:\n%s\n", (unsigned char *)ft_memchr(argv[1], *argv[2], 3));
	printf("Standart library:\n%s\n\n", (unsigned char *)memchr(argv[1], *argv[2], 3));

	//MEMCMP
	printf("___\nMEMCMP test:\n");
	printf("My solution:\n%i\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("Standart library:\n%i\n\n", memcmp("abcdefghij", "abcdefgxyz", 7));

	//STRNSTR
	printf("___\nSTRNSTR test:\n");
	// printf("My solution:\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	// printf("Standart library:\n%s\n\n", strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("My solution:\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("Standart library:\n%s\n\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	//ATOI
	printf("___\nATOI test:\n");
	printf("My solution:\n%i\n", ft_atoi(argv[1]));
	printf("Standart library:\n%i\n\n", atoi(argv[1]));

	//STRJOIN
	printf("___\nSTRJOIN test:\n");
	printf("My solution:\n%s\n", ft_strjoin("lorem ipsum", "dolor sit amet"));

	//SPLIT
	printf("___\nSTRJOIN test:\n");
	char **ptr;
	ptr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. ", ' ');
	while (*ptr)
		printf("%s\n", *ptr++);

	//ITOA
	printf("___\nITOA test:\n");
	printf("%s\n\n", ft_itoa(ft_atoi(argv[1])));

	//SUBSTR
	printf("___\nSUBSTR test:\n");
	printf("%s\n\n", ft_substr("", 1, 1));

	//TRIM
	printf("___\nTRIM test:\n");
	printf("%s\n\n", ft_strtrim("", ""));



	return(0);
}
