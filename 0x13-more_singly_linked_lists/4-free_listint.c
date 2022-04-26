#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t list.
 * @head: linked list.
 * Return: void;
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}