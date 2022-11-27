#include "lists.h"

/**
* insert_nodeint_at_index - this function inserts a new node at a given position
* @head: the pointer that points to the struct
* @idx: the index of the list where the new node should be added
* @n: the data of the new node
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
