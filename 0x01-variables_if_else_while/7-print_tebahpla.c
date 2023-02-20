#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letters in reverse followed by new line
*
*Return: return 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
