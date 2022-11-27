#include "lists.h"

/**
* free_listint2 - this function frees a list
* @head: the pointer that points to the struct
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
