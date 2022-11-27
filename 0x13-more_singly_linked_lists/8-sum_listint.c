#include "lists.h"

/**
* sum_listint - this function returns the sum of all the data (n) of a list
* @head: the pointer that points to the struct
* Return: the sum of all the data (n) of a list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
