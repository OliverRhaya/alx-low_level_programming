#include<stdio.h>
/**
 * main - Starting point
 * Return: Always 0 (Accepted)
 */
int main(void)
{
		char c;

		c = 'a';
		while
			(c <= 'z') {
				if ((c != 'q' && c != 'e') && c <= 'z')
					putchar(c);
				c++;
			}
		putchar('\n');
		return (0);
}