#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0, right_height = 0;

    /* If the tree is empty, return 0 */
    if (tree == NULL)
        return 0;

    /* Calculate the height of the left subtree */
    left_height = binary_tree_height(tree->left);

    /* Calculate the height of the right subtree */
    right_height = binary_tree_height(tree->right);

    /* Return the maximum height of the left and right subtrees, plus 1 for the current node */
    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The balance factor of the binary tree, or 0 if the tree is empty.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    /* Initialize variables for left and right heights */
    int left_height = 0, right_height = 0;

    /* If the tree is empty, return 0 */
    if (tree == NULL)
        return 0;

    /* Calculate the height of the left subtree */
    if (tree->left != NULL)
        left_height = binary_tree_height(tree->left);

    /* Calculate the height of the right subtree */
    if (tree->right != NULL)
        right_height = binary_tree_height(tree->right);

    /* Return the difference in heights as the balance factor */
    return (left_height - right_height);
}
