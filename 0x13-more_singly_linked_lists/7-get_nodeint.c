#include "lists.h"

/**
* get_nodeint_at_index - this function returns the nth node of a listint_t
* linked list
* @head: the pointer that points to the struct
* @index: the index of the node, starting at 0
* Return: the nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
