#include "lists.h"

/**
 * find_listint_loop - Finds the loop
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
		listint_t *tortoise, *hare;

		if (head == NULL || head->next == NULL)
			return (NULL);

		tortoise = head->next;
		hare = (head->next)->next;
		while (hare)
		{
			if (tortoise == hare)
			{
				tortoise = head;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (tortoise);
			}
			tortoise = tortoise->next;
			hare = (hare->next)->next;
		}
		return (NULL);
}
