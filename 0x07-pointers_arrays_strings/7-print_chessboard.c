#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: double pointer
 * Return: char
 */
void print_chessboard(char (*a)[8])
{
int b, c;
b = 0;
while (b < 8)
{
c = 0;
while (c < 8)
{
_putchar (a[b][c]);
c++;
}
_putchar ('\n');
b++;
}
}
