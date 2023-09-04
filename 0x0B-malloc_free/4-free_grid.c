#include"main.h"
#include<stdlib.h>
/**
 * free_grid - Function to free grid
 * @grid: integer
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
