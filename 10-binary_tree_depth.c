#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    /* If the node is NULL, return depth as 0 */
    if (tree == NULL)
        return 0;

    /* Initialize depth counter */
    size_t depth = 0;

    /* Traverse up the tree to the root */
    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return depth;
}
