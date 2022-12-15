#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints time
 * Return: Always void
 */
void jack_bauer(void)
{
	char a = 48;
	char b = 48;
	char c = 48;
	char d = 48;
	char x = 50;

	for (a = 48; a <= 49; a++)
	{
	for (b = 48; b <= 57; b++)
	{
	for (c = 48; c <= 53; c++)
	{
	for (d = 48; d <= 57; d++)
	{
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		putchar('\n');
	}}}}
	for (b = 48; b <= 51; b++)
	{
	for (c = 48; c <= 53; c++)
	{
	for (d = 48; d <= 57; d++)
	{
		putchar(x);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		putchar('\n');
	}}}}
