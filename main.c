#include "./1/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int	main(int argc, char *argv[])
{
	(void)argc;
	printf("ISALPHA test:\n");
	printf("My solution:\n%i\n", ft_isalpha(*argv[1]));
	printf("Standart library:\n%i\n\n", isalpha(*argv[1]));

	printf("ISDIGIT test:\n");
	printf("My solution:\n%i\n", ft_isdigit(*argv[1]));
	printf("Standart library:\n%i\n\n", isdigit(*argv[1]));

	printf("ISALNUM test:\n");
	printf("My solution:\n%i\n", ft_isalnum(*argv[1]));
	printf("Standart library:\n%i\n\n", isalnum(*argv[1]));

	printf("ISASCII test:\n");
	printf("My solution:\n%i\n", ft_isascii(*argv[1]));
	printf("Standart library:\n%i\n\n", isascii(*argv[1]));

	printf("ISPRINT test:\n");
	printf("My solution:\n%i\n", ft_isprint(*argv[1]));
	printf("Standart library:\n%i\n\n", isprint(*argv[1]));

	printf("STRLEN test:\n");
	printf("My solution:\n%lu\n", ft_strlen(argv[1]));
	printf("Standart library:\n%lu\n\n", strlen(argv[1]));


	int	test[] = {1, 2, 3};
	int	test1[] = {1, 2, 3};
	int	i;
	printf("MEMSET test:\n");
	printf("My solution:\n");
	printf("Before change:\n");
	i = 3;
	while (i != 0)
	{
		printf("%i ", *test);
		i--;
	}
	ft_memset(test, 42, 3);
	printf("After change:\n");
	i = 3;
	while (i != 0)
	{
		printf("%i ", *test);
		i--;
	}
	printf("Standart library:\n%lu\n\n", strlen(argv[1]));
	i = 3;
	while (i != 0)
	{
		printf("%i ", *test1);
		i--;
	}
	memset(test1, 42, 3);
	printf("After change:\n");
	i = 3;
	while (i != 0)
	{
		printf("%i ", *test1);
		i--;
	}
	printf("\n\n");

	printf("ATOI test:\n");
	printf("My solution:\n%i\n", ft_atoi(argv[1]));
	printf("Standart library:\n%i\n\n", atoi(argv[1]));

	return(0);
}
