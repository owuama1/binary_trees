#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node with a given value as the left-child of another node in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If the parent node is NULL or if an allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created left child node.
 *
 * Description: If the parent node already has a left-child, the new node takes its place,
 *              and the old left-child becomes the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
