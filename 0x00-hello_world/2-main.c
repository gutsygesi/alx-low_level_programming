#include <stdio.h>

/**
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	FILE *out=fopen("0-main.c","w");
	fputs("Hello File",out);
	fclose(out);
	return (0);
}
