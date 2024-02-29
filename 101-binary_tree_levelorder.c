#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    queue_t *queue = NULL;

    if (tree == NULL || func == NULL)
        return;

    queue_push(&queue, tree);

    while (!queue_is_empty(queue))
    {
        const binary_tree_t *current = queue_pop(&queue);

        func(current->n);

        if (current->left != NULL)
            queue_push(&queue, current->left);
        if (current->right != NULL)
            queue_push(&queue, current->right);
    }

    queue_delete(queue);
}
