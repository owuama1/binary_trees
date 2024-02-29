#include "binary_trees.h"

/**
 * binary_tree_height - Compute the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* If the tree is empty, return height as 0 */
    if (tree == NULL)
        return 0;

    /* Recursively calculate the height of the left subtree */
    size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

    /* Recursively calculate the height of the right subtree */
    size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    /* Return the maximum height of the left and right subtrees */
    return (left_height > right_height ? left_height : right_height);
}
