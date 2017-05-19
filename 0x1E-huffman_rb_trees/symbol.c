#include "huffman.h"

/**
 * symbol_create - fn to create a new symbol struct
 * @data: data to store in struct
 * @freq: frequency to store in struct
 * Return: ptr to new struct
 */
symbol_t *symbol_create(char data, size_t freq)
{
	symbol_t *new;

	new = malloc(sizeof(symbol_t));
	new->data = data;
	new->freq = freq;

	return (new);
}
