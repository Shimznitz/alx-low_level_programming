#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: matri
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
