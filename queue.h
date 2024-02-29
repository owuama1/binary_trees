#ifndef QUEUE_H
#define QUEUE_H
/**
 * struct queue_s - A structure to represent a queue node
 * @node: A pointer to a binary tree node
 * @next: A pointer to the next node in the queue
 */
typedef struct queue_s
{
    const binary_tree_t *node;
    struct queue_s *next;
} queue_t;

/**
 * queue_create - Creates a new queue
 *
 * Return: A pointer to the created queue, or NULL on failure
 */
queue_t *queue_create(void)
{
    return (NULL);  // Implement creation logic if needed
}

/**
 * queue_push - Pushes a node to the back of the queue
 * @queue: A pointer to the queue
 * @node: A pointer to the binary tree node to push
 */
void queue_push(queue_t **queue, const binary_tree_t *node)
{
    queue_t *new_node = malloc(sizeof(queue_t));
    if (new_node == NULL)
        return;

    new_node->node = node;
    new_node->next = NULL;

    if (*queue == NULL)
    {
        *queue = new_node;
    }
    else
    {
        queue_t *current = *queue;
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }
}

/**
 * queue_pop - Pops a node from the front of the queue
 * @queue: A pointer to the queue
 *
 * Return: A pointer to the popped node, or NULL if the queue is empty
 */
const binary_tree_t *queue_pop(queue_t **queue)
{
    if (*queue == NULL)
        return (NULL);

    queue_t *temp = *queue;
    const binary_tree_t *node = temp->node;
    *queue = (*queue)->next;
    free(temp);

    return (node);
}

/**
 * queue_is_empty - Checks if the queue is empty
 * @queue: A pointer to the queue
 *
 * Return: 1 if the queue is empty, 0 otherwise
 */
int queue_is_empty(const queue_t *queue)
{
    return (queue == NULL);
}

/**
 * queue_delete - Deletes the queue
 * @queue: A pointer to the queue
 */
void queue_delete(queue_t *queue)
{
    queue_t *temp;

    while (queue != NULL)
    {
        temp = queue;
        queue = queue->next;
        free(temp);
    }
}
#endif /* QUEUE_H */
