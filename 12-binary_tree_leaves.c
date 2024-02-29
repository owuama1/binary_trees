#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of leaves in the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    /* Initialize variables for left and right leaves */
    size_t left_leaves = 0, right_leaves = 0;

    /* If the tree is empty, return 0 */
    if (tree == NULL)
        return 0;

    /* If the node is a leaf, return 1 */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* Recursively count the leaves in the left and right subtrees */
    left_leaves = binary_tree_leaves(tree->left);
    right_leaves = binary_tree_leaves(tree->right);

    /* Return the sum of leaves in the left and right subtrees */
    return (left_leaves + right_leaves);
}
