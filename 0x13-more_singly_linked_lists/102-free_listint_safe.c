#include "lists.h"

/**
* free_listint_safe - frees a listint_t list.
* @h: the pointer to the struct
* Return: the size of the list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		counter++;
	}
	*h = NULL;
	return (counter);
}