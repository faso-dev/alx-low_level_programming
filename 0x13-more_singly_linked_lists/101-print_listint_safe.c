#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list.
* @head: the pointer to the struct
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *temp = head;
	const listint_t *temp2 = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		counter++;
		if (temp > temp2)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
		temp2 = temp2->next;
	}
	return (counter);
}
