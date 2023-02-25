#include "main.h"

/**
 * _isdigit: used to check whether a character is numeric character (0-9) or not.
 * @c: char
 * Returns; 1 if c is a digit
 * 
 * Return: 0 otherwise
 */

 int _isdigit(int c)
 {
 	if (c>= '0' && c <= '9')
		return (1);
	else
		return(0);
}
