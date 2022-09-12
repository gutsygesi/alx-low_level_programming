#include <stdio.h>

/**
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	FILE *out=fopen("2-main.c","w");
	fputs("new File",out);
	fclose(out);
	return (0);
}
