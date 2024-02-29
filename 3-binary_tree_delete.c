#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: This function deletes all nodes of the binary tree starting
 * from the given root node. It performs a post-order traversal and frees
 * each node along with its children.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    /* Delete the left subtree */
    binary_tree_delete(tree->left);

    /* Delete the right subtree */
    binary_tree_delete(tree->right);

    /* Free the current node */
    free(tree);
}

