#include "main.h"

/**
 * _isalpha - check for alphabet letters
 * by odogwu kelly
 * @c: character argument
 * Return: returns 1 or 0 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
