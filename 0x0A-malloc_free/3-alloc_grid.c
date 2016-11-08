#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - makes a 2-dimensional array with pointers and malloc
 *
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid[0][0]
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		arr[i] = (int *)malloc(height * sizeof(int));
	if (*arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
