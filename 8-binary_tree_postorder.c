#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in post-order
 * (left->right->parent) manner and calls the given function for each node,
 * passing the value of the node as a parameter to the function.
 * If tree or func is NULL, it does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* Recursively traverse the left subtree */
    binary_tree_postorder(tree->left, func);

    /* Recursively traverse the right subtree */
    binary_tree_postorder(tree->right, func);

    /* Call the function for the current node */
    func(tree->n);
}
