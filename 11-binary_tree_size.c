#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

    /* If the tree is empty, return size as 0 */
    if (tree == NULL)
        return 0;

    /* Recursively calculate the size of the left and right subtrees */
    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);

    /* Return the size of the current node plus the sizes of its children */
    return (1 + left_size + right_size);
}
