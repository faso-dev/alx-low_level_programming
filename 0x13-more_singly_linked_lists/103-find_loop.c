#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: the pointer to the struct
* Return: the address of the node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *temp2 = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL && temp2 != NULL && temp2->next != NULL)
	{
		temp = temp->next;
		temp2 = temp2->next->next;
		if (temp == temp2)
		{
			temp = head;
			while (temp != temp2)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
