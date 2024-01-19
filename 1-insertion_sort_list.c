#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node1, *node2;

	if (list == NULL || *list == NULL)
		return;

	node1 = (*list)->next;
	node2 = *list;

	while (node1 != NULL)
	{
		while (node1->prev != NULL)
		{
			if (node1->n < node1->prev->n)
			{
				node2 = node1->prev;
				if (node2->prev)
					node2->prev->next = node1;

				node1->prev = node2->prev;
				if (node1->next)
					node1->next->prev = node2;

				node2->next = node1->next;
				node2->prev = node1;
				node1->next = node2;

				if (!node1->prev)
					*list = node1;

				print_list(*list);
			}
			else
				break;
		}
		node1 = node1->next;
	}
}
