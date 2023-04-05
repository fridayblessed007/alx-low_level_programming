#include "lists.h"
/**
 * print_listint_safe - Prints a linked list of integers
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *node, *prev;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
node = head->next;
/* Check for loop */
if (node >= head)
{
printf("-> [%p] %d\n", (void *)node, node->n);
exit(98);
}
prev = head;
head = node;
}

return (count);
}

