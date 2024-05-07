#include "./libft/libft.h"

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <bsd/string.h>

void *mapFunction(void *content)
{
	int *original = (int *)content;
	int *mapped = malloc(sizeof(int));
	if (mapped)
	{
		*mapped = (*original) + 1; // Double the value
	}
	return mapped;
}

// Function to delete an element's content
void deleteFunction(void *content)
{
	free(content);
}

// Function to print the result of a test
void printResult(const char *functionName, int result)
{
	printf("%s: %s\n", functionName, result ? "PASS" : "FAIL");
}

void printList(t_list *head)
{
	while (head != NULL)
	{
		printf("%s -> ", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

char simpleMappingFunction(unsigned int index, char c)
{
	return c + index;
}

void simpleIterationFunction(unsigned int index, char *c)
{
	(*c) = (*c) + index;
}

void test_calloc(size_t nmemb, size_t size)
{
	printf("Testing ft_calloc with nmemb=%zu, size=%zu\n", nmemb, size);

	// Test the ft_calloc function
	void *result = ft_calloc(nmemb, size);

	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return;
	}

	// Verify that the allocated memory is initialized to zero
	unsigned char *ptr = (unsigned char *)result;
	size_t i;
	for (i = 0; i < nmemb * size; ++i)
	{
		if (ptr[i] != 0)
		{
			printf("Error: Memory not initialized to zero at index %zu.\n", i);
			free(result);
			return;
		}
	}

	printf("Memory allocation and initialization successful.\n");

	// Don't forget to free the allocated memory
	free(result);
}

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("At least 3 parameter needed");
		return (0);
	}

	// ISALPHA
	printf("___\nISALPHA test:\n");
	printf("My solution:\n%i\n", ft_isalpha(*argv[1]));
	printf("Standart library:\n%i\n\n", isalpha(*argv[1]));

	// ISDIGIT
	printf("___\nISDIGIT test:\n");
	printf("My solution:\n%i\n", ft_isdigit(*argv[1]));
	printf("Standart library:\n%i\n\n", isdigit(*argv[1]));

	// ISALNUM
	printf("___\nISALNUM test:\n");
	printf("My solution:\n%i\n", ft_isalnum(*argv[1]));
	printf("Standart library:\n%i\n\n", isalnum(*argv[1]));

	// ISASCII
	printf("___\nISASCII test:\n");
	printf("My solution:\n%i\n", ft_isascii(*argv[1]));
	printf("Standart library:\n%i\n\n", isascii(*argv[1]));

	// ISPRINT
	printf("___\nISPRINT test:\n");
	printf("My solution:\n%i\n", ft_isprint(288));
	printf("Standart library:\n%i\n\n", isprint(288));

	// STRLEN
	printf("___\nSTRLEN test:\n");
	printf("My solution:\n%lu\n", ft_strlen(argv[1]));
	printf("Standart library:\n%lu\n\n", strlen(argv[1]));

	// MEMSET
	char test[] = "some string";
	char test1[] = "some string";
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
	memset(test1, '0', 3);
	printf("\n");
	printf("After change:\n");
	printf("%s ", test1);
	printf("\n\n");

	// BZERO
	char test2[] = "some string";
	char test3[] = "some string";
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

	// MEMCPY

	char test4[] = "some string";
	char test6[11];
	char test5[] = "some string";
	char test7[11];
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

	// MEMMOVE

	char test8[] = "some string";
	char test9[11];
	char test10[] = "some string";
	char test11[11];
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

	// STRLCPY

	char test12[] = "some string";
	char test13[11];
	char test14[] = "some string";
	char test15[11];
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

	// STRLCAT
	char test16[] = "lorem ipsum dolor sit amet";
	char test17[10] = "aaaaaaaaaa";
	char test18[] = "lorem ipsum dolor sit amet";
	char test19[10] = "aaaaaaaaaa";
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

	// TOUPPER
	printf("___\nTOUPPER test:\n");
	printf("My solution:\n%c\n", ft_toupper(*argv[1]));
	printf("Standart library:\n%c\n\n", toupper(*argv[1]));

	// TOLOWER
	printf("___\nTOLOWER test:\n");
	printf("My solution:\n%c\n", ft_tolower(*argv[1]));
	printf("Standart library:\n%c\n\n", tolower(*argv[1]));

	// STRCHR
	printf("___\nSTRCHR test:\n");
	printf("My solution:\n%s\n", ft_strchr(argv[1], *argv[2]));
	printf("Standart library:\n%s\n\n", strchr(argv[1], *argv[2]));

	// STRRCHR
	printf("___\nSTRRCHR test:\n");
	printf("My solution:\n%s\n", ft_strrchr(argv[1], *argv[2]));
	printf("Standart library:\n%s\n\n", strrchr(argv[1], *argv[2]));
	printf("My solution:\n%s\n", ft_strrchr("123456789", 'a'));
	printf("Standart library:\n%s\n\n", strrchr("123456789", 'a'));

	// STRNCMP
	printf("___\nSTRNCMP test:\n");
	printf("My solution:\n%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("Standart library:\n%d\n\n", strncmp("test\200", "test\0", 6));

	// MEMCHR
	printf("___\nMEMCHR test:\n");
	printf("My solution:\n%s\n", (unsigned char *)ft_memchr(argv[1], *argv[2], 3));
	printf("Standart library:\n%s\n\n", (unsigned char *)memchr(argv[1], *argv[2], 3));

	// MEMCMP
	printf("___\nMEMCMP test:\n");
	printf("My solution:\n%i\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("Standart library:\n%i\n\n", memcmp("abcdefghij", "abcdefgxyz", 7));

	// STRNSTR
	printf("___\nSTRNSTR test:\n");
	// printf("My solution:\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	// printf("Standart library:\n%s\n\n", strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("My solution:\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	// printf("Standart library:\n%s\n\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	// ATOI
	printf("___\nATOI test:\n");
	printf("My solution:\n%i\n", ft_atoi(argv[1]));
	printf("Standart library:\n%i\n\n", atoi(argv[1]));

	// CALLOC
	printf("___\nCALLOC test:\n");
	int *arr = (int *)ft_calloc(5, sizeof(int));
	int i;
	i = 0;
	while (i < 5)
	{
		printf("%i: %c", i, arr[i]);
		i++;
	}
	free(arr);
	printf("\n\n");

	// STRDUP
	printf("___\nSTRDUP test:\n");
	char *originalStr = "Hello, World!";
	char *copiedStr = ft_strdup(originalStr);
	printf("Orginial string: %s\nCopied string: %s\n\n", originalStr, copiedStr);
	free(copiedStr);

	// SUBSTR
	printf("___\nSUBSTR test:\n");
	char *result4 = ft_substr("12345", 2, 2);
	printf("%s\n\n", result4);
	free(result4);
	// SUBSTR
	printf("___\nSUBSTR test:\n");
	{
		char *tmp = ft_substr("this is substring", 0, 17);
		printf("%s\n\n", tmp);
		free(tmp);
	}
	// STRJOIN
	printf("___\nSTRJOIN test:\n");
	{
		char *ptr = ft_strjoin("lorem ipsum", " dolor sit amet");
		printf("My solution:\n%s\n", ptr);
		// for (size_t i = 0; ptr[i]; i++) { free(ptr[i]);	}
		free(ptr);
	}

	// TRIM
	printf("___\nTRIM test:\n");
	{
		char *tmp = ft_strtrim("testing", "tg");
		printf("%s\n\n", tmp);
		free(tmp);
	}

	// SPLIT
	printf("___\nSPLIT test:\n");
	char **ptr;
	ptr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. ", ' ');
	for (int i = 0; ptr[i]; i++)
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
	}
	free(ptr);
	// ITOA
	printf("___\nITOA test:\n");
	{
		char *tmp = ft_itoa(ft_atoi(argv[1]));
		printf("%s\n\n", tmp);
		free(tmp);
	}


	// STRMAPI
	printf("___\nSTRMAPI test:\n");
	printf("BEFORE: test text\n");
	{
		char *tmp = ft_strmapi("test text", simpleMappingFunction);
		printf("AFTER: %s\n\n", tmp);
		free(tmp);
	}

	// STRITERI
	printf("___\nSTRITERI test:\n");
	char str1[] = "abcd";
	printf("BEFORE: %s\n", str1);
	ft_striteri(str1, simpleIterationFunction);
	printf("AFTER: %s\n\n", str1);

	// PUTCHAR_FD
	printf("___\nPUTCHAR_FD test:\n");
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('E', 2);
	ft_putchar_fd('\n', 1);

	// PUTSTR_FD
	printf("___\nPUTSTR_FD test:\n");
	ft_putstr_fd("test string\n\n", 1);

	// PUTENDL_FD
	printf("___\nPUTENDL_FD test:\n");
	ft_putendl_fd("test string\n", 1);

	// PUTNBR_FD
	printf("___\nPUTNBR_FD test:\n");
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	// LSTMAP
	printf("___\nLSTMAP test:\n");
	printf("ORIGINAL:\nhello\n");
	// Test Case 1: Map an empty list
	t_list *emptyList = NULL;
	t_list *result1 = ft_lstmap(emptyList, mapFunction, deleteFunction);
	printf("ft_lstmap Test Case 1:\n %s\n", (char *)result1);

	// Test Case 2: Map a non-empty list
	t_list *list = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("world")));
	t_list *result2 = ft_lstmap(list, mapFunction, deleteFunction);
	// Check if the mapping worked correctly (e.g., strings are doubled)
	printf("ft_lstmap Test Case 2:\n %p\n\n", (void *)result2->content);

	// Clean up the mapped list
	ft_lstclear(&result2, deleteFunction);
	ft_lstclear(&list, deleteFunction);

	return (0);
}
