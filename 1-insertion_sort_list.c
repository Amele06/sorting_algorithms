#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *  in ascending order using the Insertion sort algorithm
 *  @list: double pointer to the first element of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *next;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;

	while (node)
	{
		next = node->next;
		while (node->prev != NULL && node->n < node->prev->n)
		{
			node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->prev->prev;
			node->next->prev = node;
			if (node->prev != NULL)
				node->prev->next = node;
			else
				*list = node;
			print_list(*list);
		}
		node = next;
	}
}
