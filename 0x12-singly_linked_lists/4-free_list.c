#include "lists.h"

/**
* free_list - the function that frees a list_t list.
* @head: the pointer that points to the struct.
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}

