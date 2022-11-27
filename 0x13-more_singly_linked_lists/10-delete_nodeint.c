#include "lists.h"

/**
* delete_nodeint_at_index - this function deletes the node at index
* @head: the pointer that points to the struct
* @index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
