#include "lists.h"
/**
 * free_list - frees a list .
 * @head: beginnig of the linked list
 * Return: no return
 */
void free_list(list_t *h)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
