#ifndef MAIN_H
#define MAIN_H

/**
 *  * _putchar - puts character to standard output
 *
 *   * @c: character to put to standard output
 *
 */

int _putchar(char c);

/**
 * _strcat - concatenate two strings
 *   * @s: pointer to memory area
 *
 *    * @b: constant value
 *
 *     * @n: number of bytes to fill
 *
 *      * Return: memory area
 *
 */

char *_strcat(char *dest, char *src);


/**
 * * _strncat - concatenate n bytes to destination string
 *
 *   * @dest: destination
 *
 *    * @src: source
 *
 *     * @n: number of bytes
 *
 *      * Return: pointer to dest
 *
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string
 *   * @s: string to search
 *
 *    * @c: target characer
 *
 *     * Return: pointer to that character in string
 *
 */


char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 *   * @s: string to search
 *
 *    * @accept: target matches
 *
 *     * Return: number of bytes consecutively matched
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse array elements
 *   * @s: string to search
 *
 *    * @accept: target matches
 *
 *     * Return: pointer to index of string at first occurence
 *
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - capitalize first letter of all words
 *   * @haystack: string to search
 *
 *    * @needle: target substring to search for
 *
 *     * Return: pointer to index of string at first occurence of whole substr
 */


char *string_toupper(char *);

/**
 *  *cap_string - capitalize first letter of all words
 *
 *   * @a: 2D array
 *
 */

char *cap_string(char *s);

/**
 * rot13 - encode string using rot13
 *
 *   * @a: matrix
 *
 *    * @size: size of matrix
 *
 */

char *rot13(char *s);

/**
 *  leet - encode string into 1337 leet
 *
 *   * @s: variable of type pointer
 *
 *    * @to: char
 *
 */

char *leet(char *s);

/**
 *  * print_number - print an integer, without using long, arrays, or pointers
 *
 *   * @n: number to be printed
 *
 */

void print_number(int n);

#endif
