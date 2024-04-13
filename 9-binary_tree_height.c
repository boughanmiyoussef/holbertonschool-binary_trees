#include "binary_trees.h"

/**
 * binary_tree_height - Function name
 * @tree: tree
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t a = 0; // left
size_t b = 0; // right

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
}
return ((a > b) ? a : b);
}
}
