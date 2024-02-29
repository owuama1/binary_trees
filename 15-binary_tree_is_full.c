#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* If the tree is empty, return 1 */
    if (tree == NULL)
        return 1;

    /* If both children are NULL, the node is a leaf and the tree is full */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* If one child is NULL and the other is not, the tree is not full */
    if (tree->left == NULL || tree->right == NULL)
        return 0;

    /* Recursively check if both subtrees are full */
    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
