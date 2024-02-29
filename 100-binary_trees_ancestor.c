#include "binary_trees.h"

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another node
 * @node: A pointer to the potential descendant node.
 * @ancestor: A pointer to the potential ancestor node.
 *
 * Return: 1 if @node is a descendant of @ancestor, otherwise 0.
 */
int binary_tree_is_descendant(const binary_tree_t *node, const binary_tree_t *ancestor)
{
    const binary_tree_t *current;

    if (node == NULL || ancestor == NULL)
        return (0);

    current = node;
    while (current != NULL)
    {
        if (current == ancestor)
            return (1);
        current = current->parent;
    }
    return (0);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor;

    if (first == NULL || second == NULL)
        return NULL;

    ancestor = first;
    while (ancestor != NULL)
    {
        if (binary_tree_is_descendant(second, ancestor))
            return (binary_tree_t *)ancestor;
        ancestor = ancestor->parent;
    }
    return NULL;
}
