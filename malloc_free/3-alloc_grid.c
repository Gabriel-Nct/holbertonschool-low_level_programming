#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Crée une grille 2D d'entiers initialisée à 0
 * @width: largeur de la grille
 * @height: hauteur de la grille
 *
 * Return: un pointeur vers la grille allouée, ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h, w;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(width * sizeof(int));
if (grid[h] == NULL)
{
for (w = 0; w < h; w++)
{
free(grid[w]);
}
free(grid);
return (NULL);
}
for (w = 0; w < width; w++)
{
grid[h][w] = 0;
}
}
return (grid);
}
