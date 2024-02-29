#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of nodes with at least 1 child in the binary tree,
 *         or 0 if the tree is empty.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    /* Initialize variables for left and right nodes */
    size_t left_nodes = 0, right_nodes = 0;

    /* If the tree is empty, return 0 */
    if (tree == NULL)
        return 0;

    /* Recursively count the nodes in the left and right subtrees */
    left_nodes = binary_tree_nodes(tree->left);
    right_nodes = binary_tree_nodes(tree->right);

    /* Return the sum of nodes with at least 1 child */
    return (left_nodes + right_nodes + (tree->left || tree->right ? 1 : 0));
}
