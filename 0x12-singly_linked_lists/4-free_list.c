#include "lists.h"

/**
* free_list - the function that frees a list_t list.
* @head: the pointer that points to the struct.
*
* Return: nothing.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != '\0')
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
