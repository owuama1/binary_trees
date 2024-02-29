#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists
 * or if node or its parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /* If node or its parent is NULL, return NULL */
    if (node == NULL || node->parent == NULL)
        return NULL;

    /* If node is the left child, return the right child (sibling) */
    if (node->parent->left == node)
        return node->parent->right;

    /* If node is the right child, return the left child (sibling) */
    if (node->parent->right == node)
        return node->parent->left;

    /* If node is neither left nor right child, return NULL */
    return NULL;
}
