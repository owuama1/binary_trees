#include "binary_trees.h"
/**
 * binary_tree_height - Compute the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    /* If the tree is empty, return height as 0 */
    if (tree == NULL)
        return 0;

    /* Recursively calculate the height of the left subtree */
    left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

    /* Recursively calculate the height of the right subtree */
    right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    /* Return the maximum height of the left and right subtrees */
    return (left_height > right_height ? left_height : right_height);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size, max_size;

    if (tree == NULL)
        return 0;

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);
    max_size = (1 << (height + 1)) - 1;

    return size == max_size;
}
