#include "lists.h"

/**
 * check_cycle - Function Check if a linked list contains a cycle
 * @list: This is a Pointer to the head of the linked list
 * Return: 1 if the list has a cycle else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise = list;
	listint_t *hare = list;

	if (!list)
		return (0);

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		return (1);
	}

	return (0);
}

