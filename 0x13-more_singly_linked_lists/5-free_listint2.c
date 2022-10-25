#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to null
 *
 * @head: the list
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{

		listint_t *tmp;

		if (head == NULL)
			return;

		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
}
