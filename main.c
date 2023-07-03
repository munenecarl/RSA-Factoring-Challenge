#include "main.h"

/**
 * main - entry point of the program, reads the numbers in the file on each line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[]__attribute_maybe_unused__)
{
	FILE *file;
	int number;
	
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "No numbers in this file %s\n", argv[1]);
		return (1);
	}
	while (fscanf(file, "%d", &number) != EOF)
	{        
		second_factorizer(number);
    	}
	fclose(file);
	return (0);
}