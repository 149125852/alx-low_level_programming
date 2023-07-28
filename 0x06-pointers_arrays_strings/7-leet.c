#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: string that is encoded
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {
