#include "lists.h"

/**
* pop_listint - this function deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
* @head: the pointer that points to the struct
* Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
