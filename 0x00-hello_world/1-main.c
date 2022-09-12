#include <stdio.h>

/**
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	FILE *out=fopen("1-main.c","w");
	fputs("New file to execute",out);
	fclose(out);
	return (0);
}
