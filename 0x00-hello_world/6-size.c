#include <stdio.h>
/**
 * Main entry point
 *
 * Return: Aways 0 (Successs)
 */
int main(void)
{
       	int intType;
	float floatType;
       	double doubleType;
       	char charType;
	int longType;

	 printf("Size of a char: %zu bytes\n", sizeof(charType));
	 printf("Size of a int: %zu bytes\n", sizeof(intType));
	 printf("Size of a long int: %zu bytes\n", sizeof(longType));
	 printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
	 printf("Size of a float: %zu byte\n", sizeof(charType));
	                      
	 return(0);
}
